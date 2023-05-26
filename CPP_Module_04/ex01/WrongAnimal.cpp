/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:01:55 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/26 14:22:15 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->m_type =  BOLD RED "WrongAnimal" R;
}

WrongAnimal::WrongAnimal(std::string type) : m_type(type)
{
	std::cout << "WrongAnimal overload constructor called" << std::endl;
	this->m_type = BOLD RED + type + R;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
	std::cout << "WrongAnimal constructor copy called" << std::endl;
	this->m_type = copy.m_type;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& copy)
{
	if (this != &copy)
	{
		this->m_type = copy.m_type;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->m_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->m_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << BOLD << this->m_type << R << " make a sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
