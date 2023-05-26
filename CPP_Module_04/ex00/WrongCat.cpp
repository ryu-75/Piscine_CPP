/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:01:46 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/26 14:22:13 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat overload constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat constructor copy called" << std::endl;
	this->m_type = copy.m_type;
}

WrongCat&	WrongCat::operator=(WrongCat const& copy)
{
	if (this != &copy)
	{
		this->m_type = copy.m_type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
