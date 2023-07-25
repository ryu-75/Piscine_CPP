/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:20:09 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/25 15:49:32 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->_nMax = 0;
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _nMax(n)
{
	std::cout << "Span overload constructor called" << std::endl;
}

Span::Span(Span const &rhs) : _nMax(rhs._nMax)
{
	std::cout << "Span constructor copy called" << std::endl;
}

Span&	Span::operator=(Span const &copy)
{
	if (this != &copy)
	{
		this->_nMax = copy._nMax;
		this->_vct = copy._vct;
	}
	return (*this);
}

const char*	Span::MaxCapacity::what() const throw()
{
	return ("🔺  Max capacity has been exceeded.");
}

const char*	Span::NotEnoughNum::what() const throw()
{
	return ("🔺  Size must be greater than one.");
}

void	Span::dispVector(void) const
{
	std::cout << "\e[1mDisplay vector content : \e[0m" << std::endl;
	for (unsigned int i = 0; i < this->_vct.size(); i++)
	{
		std::cout << "_vct[" << i << "] = " << this->_vct[i] << std::endl;
	}
}

void	Span::addMoreItem(unsigned int nb)
{
	unsigned int	res;

	std::srand(std::time(NULL));
	for (unsigned int i = 0; i < nb; i++)
	{
		res = rand() % (nb * 10);
		this->addNumber(res);
	}
}

void	Span::addNumber(unsigned int n)
{
	if (this->_vct.size() < this->_nMax)
		_vct.push_back(n);
	else
		throw (Span::MaxCapacity());
}

unsigned int	Span::shortestSpan(void) const
{
	std::vector<int>::const_iterator	vOne;
	std::vector<int>::const_iterator	vTwo;
	int	diff = INT_MAX;

	if (this->_vct.size() < 2)
		throw (Span::NotEnoughNum());
	for (vOne = this->_vct.begin(); vOne < this->_vct.end(); vOne++)
		for (vTwo = vOne + 1; vTwo < this->_vct.end(); vTwo++)
			if (abs(*vOne - *vTwo) < diff)
				diff = abs(*vOne - *vTwo);
	return (diff);
}

unsigned int	Span::longestSpan(void) const
{
	std::vector<int>::const_iterator	vOne;
	std::vector<int>::const_iterator	vTwo;
	int	diff = INT_MIN;

	if (this->_vct.size() < 2)
		throw (Span::NotEnoughNum());
	for (vOne = this->_vct.begin(); vOne != this->_vct.end(); vOne++)
		for (vTwo = vOne + 1; vTwo != this->_vct.end(); vTwo++)
			if (abs(*vOne - *vTwo) > diff)
				diff = abs(*vOne - *vTwo);
	return (diff);
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}
