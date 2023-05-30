/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:01:46 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 15:08:11 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// [Default construtor]
WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

// [Overload construtor]
WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat overload constructor called" << std::endl;
}

// [Construtor copy]
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

// Methods
void	WrongCat::makeSound(void) const
{
	std::cout << this->m_type << " said : Miaouh" << std::endl;
}

void	WrongCat::setType(std::string type)
{
	this->m_type = type;
}

std::string	WrongCat::getType(void) const
{
	return (this->m_type);
}

// [Destructor]
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
