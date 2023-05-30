/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:01:46 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:35:19 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// [Default constructor]
WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->m_type = "Wrong cat";
}

// [Overload constructor]
WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "Overload constructor called" << std::endl;
	this->m_type = type;
}

// [Constructor copy]
WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat constructor copy called" << std::endl;
	*this = copy;
}

// [Assignment operator]
WrongCat&	WrongCat::operator=(WrongCat const& copy)
{
	if (this != &copy)
		this->m_type = copy.m_type;
	return (*this);
}

// [Destructor]
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
