/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:18:02 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/03 13:05:10 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int destination, int weight) : _destination(destination), _weight(weight)
{
	std::cout << "Overload constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &lhs)
{
	this->_destination = lhs._destination;
	this->_weight = lhs._weight;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe &copy)
{
	if (this != &copy)
	{
		this->_destination = copy._destination;
		this->_weight = copy._weight;
		return (*this);
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
	std::cout << "Destructor called" << std::endl;
}

void	PmergeMe::parseValue(std::string str)
{
	std::vector<int>	tmp;

	std::cout << str.size() << std::endl;
	for (size_t i = 1; i < str.size(); i++)
	{
		std::cout << str[i] << std::endl;
		// const char*	s_tmp = str.c_str();
		// int	val = atoi(s_tmp);
		// tmp.push_back(val);
	}
}
