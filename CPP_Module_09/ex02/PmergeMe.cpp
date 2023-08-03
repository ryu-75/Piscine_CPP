/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:18:02 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/03 15:17:32 by nlorion          ###   ########.fr       */
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

void	PmergeMe::parseValue(char **av, int ac)
{
	int	res = 0;

	for (int i = 1; i <= ac; i++)
	{
		if (av[i] && isdigit(*av[i]) && *av[i] != '-')
			res = atoi(av[i]);
		this->_stackValue.push_back(res);
		std::cout << this->_stackValue[i] << std::endl;
	}
}
