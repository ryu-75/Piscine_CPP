/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:45:38 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/26 14:28:09 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->m_type = BOLD BLUE "Cat" R;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat overload constructor called" << std::endl;
	this->m_type = BOLD BLUE + type + R;
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

void	Cat::makeSound(void) const
{
	std::cout << this->m_type << " said : Miaouh ! *grumpy cat*" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
