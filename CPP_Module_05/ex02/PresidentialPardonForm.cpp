/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:15:47 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 13:03:59 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// ***************** CONSTRUCTOR / DECONSTRUCTOR ***********************

PresidentialPardonForm::PresidentialPardonForm(std::string name, const std::string &target) :
	AForm(name, 25, 5), m_target(target)
{
	std::cout << "PresidentialPardonForm overload constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->m_target = rhs.m_target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	this->m_target = copy.m_target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

// ***************** METHOD ***********************

void	PresidentialPardonForm::execForm(void) const
{
	std::cout << this->m_target << " was forgiven by Zaphod Beeblebrox" << std::endl;
}

