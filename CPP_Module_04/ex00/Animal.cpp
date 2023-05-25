/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:39 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 15:47:38 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->m_type = "Unknown";
}

Animal::Animal(std::string type) : m_type(type)
{
	std::cout << "Animal overload constructor called" << std::endl;
}

Animal::Animal(Animal const& copy)
{
	std::cout << "Animal constructor copy called" << std::endl;
	m_type = copy.m_type;
}

Animal&	Animal::operator=(Animal const& copy)
{
	if (this != &copy)
		m_type = copy.m_type;
	return (*this);
}

void	Animal::getType(void)
{
	setType(this->m_type);
}

std::string	Animal::setType(std::string type)
{
	return (this->m_type = type);
}

void	Animal::makeSound(void) const
{
	std::cout << BOLD << this->m_type << R;
}

void	Animal::display(void) const
{
	std::cout << BOLD << this->m_type << R << " we don't know what is it !" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
