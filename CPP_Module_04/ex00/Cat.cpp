/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:45:38 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 15:48:27 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->m_type = "Cat";
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat overload constructor called" << std::endl;
	this->m_type = type;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
	std::cout << "Cat constructor copy called" << std::endl;
	this->m_type = copy.m_type;
}

Cat&	Cat::operator=(Cat const& copy)
{
	if (this != &copy)
		this->m_type = copy.m_type;
	return (*this);
}

void	Cat::display(void) const
{
	std::cout << "This is a " << BOLD BLUE << this->m_type << R << std::endl;
}

void	Cat::makeSound(void) const
{
	Animal::makeSound();
	std::cout << " said : Miaouh ! *grumpy cat*" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
