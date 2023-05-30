/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:53:28 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:54:59 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// [Default construtor]
Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->m_type = BOLD GREEN "Dog" R;
}

// [Overload construtor]
Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog overload constructor called" << std::endl;
	this->m_type = BOLD GREEN + type + R;
}

// [Construtor copy]
Dog::Dog(Dog const& copy) : Animal(copy)
{
	std::cout << "Dog constructor copy called" << std::endl;
	*this = copy;
}

// [Assignment operator]
Dog&	Dog::operator=(Dog const& copy)
{
	if (this != &copy)
		this->m_type = copy.m_type;
	return (*this);
}

// [Methods]
void	Dog::makeSound(void) const
{
	std::cout << this->m_type << " said : Wouaf wouaf ! *sweet dog*" << std::endl;
}

// [Destructor]
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
