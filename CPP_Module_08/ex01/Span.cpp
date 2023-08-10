/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:20:09 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/09 19:16:08 by nlorion          ###   ########.fr       */
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
<<<<<<< HEAD
	std::vector<int>::const_iterator	vOne = min_element(this->_vct.begin(), this->_vct.end());
	// std::vector<int>::const_iterator	vTwo = max_element(this->_vct.begin(), this->_vct.end());

	if (this->_vct.size() < 2)
		throw (Span::NotEnoughNum());
	int	diff = *vOne;
	// std::cout << "diff : " << diff << std::endl;
	return (diff);
=======
	if (this->_vct.size() < 2)
		throw Span::NotEnoughNum();
	std::vector<int>	copy = this->_vct;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::const_iterator	it = std::min_element(this->_vct.begin(), this->_vct.end());
	int	i = copy[1];
	int	res = i - *it;
	return (res);
>>>>>>> 93aff9e852c35954946efb3a3fcb5eab5947fb7a
}

unsigned int	Span::longestSpan(void) const
{
<<<<<<< HEAD
	int	vTwo = *std::max_element(this->_vct.begin(), this->_vct.end());

	if (this->_vct.size() < 2)
		throw (Span::NotEnoughNum());
	unsigned int	ret = *vTwo;
	return (ret);
=======
	if (this->_vct.size() < 2)
		throw (Span::NotEnoughNum());
	std::vector<int>	copy = this->_vct;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::const_iterator	it = std::max_element(this->_vct.begin(), this->_vct.end());
	int	i = copy[this->_vct.size() - 2];
	int	res = *it - i;
	return (res);
>>>>>>> 93aff9e852c35954946efb3a3fcb5eab5947fb7a
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}
