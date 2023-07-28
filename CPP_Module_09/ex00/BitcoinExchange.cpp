/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:50:24 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/28 16:54:54 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc(void)
{
	std::cout << "Btc default constructor called" << std::endl;
}

Btc::Btc(const Btc &copy)
{
	std::cout << "Btc copy constructor called" << std::endl;
	*this = copy;
}

Btc&	Btc::operator=(const Btc &rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

Btc::~Btc()
{
	std::cout << "Btc destructor called" << std::endl;
}

bool	Btc::checkContent(std::string file) const
{
	const char	*tmp = file.c_str();

	if ((atol(tmp) < 2009 || atol(tmp) > 2022) ||\
			(atol(tmp + 5) < 1 || atol(tmp + 5) > 12) ||\
				(atol(tmp + 8) < 1 || atol(tmp + 8) > 31))
				{
					// Throw exception if false
					std::cout << "Date format is not good" << std::endl;
					return (false);
				}
	return (true);
}

void	Btc::parseFiles(char *av)
{
	std::ifstream	file(av);
	std::string	tmp;
	std::string	news;
	std::string	date;
	std::map<std::string, unsigned int>	btc;

	if (file.is_open() == true)
	{
		while (!file.eof())
		{
			int	i = 0;
			getline(file, tmp);
			while (isalpha(tmp[i]) || tmp[i] == ',' || tmp[i] == '_')
				i++;
			while (tmp[i])
			{
				if (checkContent(tmp) == false)
					exit (1);
				news = tmp;
				i++;
			}
		}
		std::cout << news << std::endl;
	}
}
