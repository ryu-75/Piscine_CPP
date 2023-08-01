/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:50:24 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 14:28:18 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char*	Btc::ExceptionBtc::what() const { return (_message.c_str()); }

Btc::Btc() { std::cout << "Btc default constructor called" << std::endl; }

Btc::Btc(const Btc &copy)
{
	std::cout << "Btc copy constructor called" << std::endl;
	*this = copy;
}

Btc::Btc(std::string inputName) : _inputName(inputName)
{
	parseFiles();
	parsInput(_inputName);
}

Btc&	Btc::operator=(const Btc &rhs)
{
	if (this != &rhs)
	{
		this->_btcMap = rhs._btcMap;
		this->_inputName = rhs._inputName;
	}
	return (*this);
}

Btc::~Btc() { std::cout << "Btc destructor called" << std::endl; }

bool	Btc::checkContent(std::string file) const
{
	const char	*tmp = file.c_str();

	if (file.size() != 10 || (atol(tmp) < 2009 || atol(tmp) > 2022) ||\
			(atol(tmp + 5) < 1 || atol(tmp + 5) > 12) ||\
				(atol(tmp + 8) < 1 || atol(tmp + 8) > 31))
					return (false);
	for (size_t i = 0; i < file.size(); i++)
	{
		if (!isdigit(tmp[i]))
			if (!(tmp[i] == '-' && (i == 4 || i == 7)))
				return (false);
	}
	return (true);
}

void	Btc::parseFiles(void)
{
	std::ifstream	file("./data.csv");
	std::string	line;
	
	if (file.is_open() == true)
	{
		int	i = 0;
		
		getline(file, line);
		if (!(line.find("date,exchange_rate") != std::string::npos))
			throw ExceptionBtc("Error: File should have \"date,exchange_rate\" at the begginning");
		while (!file.eof())
		{
			getline(file, line);
			std::string	nb_str;
			std::string	date_str;
			
			std::size_t	pos = line.find(',');
			if (pos != std::string::npos)
			{
				date_str = line.substr(0, pos);
				nb_str = line.substr(pos + 1);
				if (checkContent(date_str) == false)
					throw ExceptionBtc("Error: bad date format");
				if (_btcMap.find(date_str) != _btcMap.end())
					throw ExceptionBtc("Error: date already exist");
				if (parsValue(nb_str) == false)
					throw ExceptionBtc("Error: invalid value");
					
				float	nb = strtof(nb_str.c_str(), NULL);
				
				if (nb < 0)
					throw ExceptionBtc("Error: not a positive number");
				_btcMap.insert(std::make_pair(date_str, strtof(nb_str.c_str(), NULL)));
			}
			i++;
		}
	}
	else
		throw ("Error: File cannot be open");
	file.close();
}

void	Btc::parsInput(std::string str)
{
	std::ifstream	file;
	std::string	line;

	file.open(str.c_str());
	if (file.is_open() == false)
		throw ExceptionBtc("Error: failed to open file");
	std::getline(file, line);
	if (!(line.find("date | value") != std::string::npos))
		throw ExceptionBtc("Error: expected at first line : \"date | value\"");
	for (size_t i = 0; getline(file, line); i++)
		try { doExchange(line); }
		catch(ExceptionBtc & e) { std::cerr << e.what() << std::endl; }
	file.close();
}

bool	Btc::parsValue(std::string value)
{
	bool	hasPoint = false;

	if (value.size() == 0)
		return (false);
	for (size_t i = 0; i < value.size(); i++)
	{
		if (!isdigit(value[i]))
		{
			if (value[i] == '.' && hasPoint == false)
				hasPoint = true;
			else
				return (false);
		}
	}
	return (true);
}

void	Btc::doExchange(std::string line)
{
	std::string	getCurrentDate;

	getCurrentDate = getCurrentDate.assign(line, 0, 10);
	if (!checkContent(getCurrentDate))
		throw ExceptionBtc("Error: bad input => " + getCurrentDate);
	std::string	val(line.begin() + 10, line.end());
	if (val.compare(0, 3, " | "))
		throw ExceptionBtc("Error: bad line");
	val.erase(0, 3);
	
	double	nbValue = atof(val.c_str());
	
	map_iterator	it = nearestKey(getCurrentDate);
	if (nbValue < 0)
		throw ExceptionBtc("Error: not a positive number");
	if (nbValue > 1000)
		throw ExceptionBtc("Error: too large a number");
	if (checkContent(val))
		throw ExceptionBtc("Error: Bad format");
	if (it == _btcMap.end())
		throw ExceptionBtc("Error: too recent date to output bitcoin value");
		
	double	exchangeRate = it->second;
	double	res = exchangeRate * nbValue;	
	
	std::cout << getCurrentDate << " => " << nbValue << " = " << res << std::endl;
}

Btc::map_iterator	Btc::nearestKey(std::string& key)
{
		map_iterator	it = _btcMap.find(key);
		
		if (it != _btcMap.end())
			return (it);
		it = _btcMap.lower_bound(key);
		return (it == _btcMap.begin() || it == _btcMap.end() ? it : --it);
}