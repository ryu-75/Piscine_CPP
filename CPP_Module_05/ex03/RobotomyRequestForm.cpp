/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:15:46 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/18 12:30:31 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// ***************** CONSTRUCTOR / DECONSTRUCTOR ***********************

RobotomyRequestForm::RobotomyRequestForm() : Form("unknown", 72, 45), m_target("David Haller")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) :
	Form(name, 72, 45), m_target(target)
{
	std::cout << "RobotomyRequestForm overload constructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->m_target = rhs.m_target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	this->m_target = copy.m_target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestFrom destructor called" << std::endl;
}

// ***************** METHOD ***********************

void	RobotomyRequestForm::execForm(void) const
{
	std::cout << "🤖 VRRRRvrrrVRRRRRRvrrrVRRRRR" << std::endl;
	if (std::rand() % 2 == 1)
		std::cout << this->m_target << " was succesfully robotomised." << std::endl;
	else
		std::cout << "Robotomy of " << this->m_target << " failed... Sorry my dear." << std::endl;
}
