/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:39 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:54:05 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// [Default construtor]
Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->m_type = BOLD "Unknown" R;
}

// [Overload construtor]
Animal::Animal(std::string type)
{
	std::cout << "Animal overload constructor called" << std::endl;
	this->m_type = BOLD + type + R;
}

// [Construtor copy]
Animal::Animal(Animal const& copy)
{
	std::cout << "Animal constructor copy called" << std::endl;
	*this = copy;
}

// [Assignment operator]
Animal&	Animal::operator=(Animal const& copy)
{
	if (this != &copy)
		this->m_type = copy.m_type;
	return (*this);
}

// [Methods]
std::string	Animal::getType(void) const
{
	return (this->m_type);
}

void	Animal::setType(std::string type)
{
	this->m_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << BOLD << this->m_type << R << " said something" << std::endl;
}

// [Destructor]
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
