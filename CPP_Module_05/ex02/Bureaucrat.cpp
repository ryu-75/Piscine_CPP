/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:51:07 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 12:57:24 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ******************* CONSTRUCTOR / DESTRUCTOR ******************************

Bureaucrat::Bureaucrat(const std::string &name, int grade) : m_name(name), m_grade(grade)
{
	std::cout << "Bureaucrat overload constructor called" << std::endl;
	if (this->m_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->m_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : m_name(copy.m_name), m_grade(copy.m_grade)
{
	std::cout << "Bureaucrat constructor copy called" << std::endl;
	if (this->m_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->m_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &rhs)
{
	m_grade = rhs.m_grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

// ************************ GETTER ****************************************

std::string	Bureaucrat::getName(void) const
{
	return (this->m_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->m_grade);
}

void	Bureaucrat::toDecrement(void)
{
	try
	{
		if (this->m_grade >= 1 && this->m_grade < 150)
			this->m_grade++;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		e.what();
	}
}

void	Bureaucrat::toIncrement(void)
{
	try
	{
		if (this->m_grade > 1 && this->m_grade <= 150)
			this->m_grade--;
		else
			throw Bureaucrat::GradeTooHighException();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		e.what();
	}
}

void	Bureaucrat::signForm(AForm &form) const
{
	if (form.getSign())
		std::cout << "➡️  " << this->getName() << " cannot sign \e[34m\e[1m" << form.getName() << "\e[0m because the form is already signed." << std::endl;
	else if (form.getSignGrade() < this->getGrade())
		std::cout << "➡️  " << this->getName() << " cannot sign \e[34m\e[1m" << form.getName() << "\e[0m because it's grade is too low." << std::endl;
	else
		std::cout << "➡️  " << this->getName() << " signed \e[34m\e[1m" << form.getName() << "\e[0m"  << std::endl;
	form.beSign(*this);
}

std::ostream&	operator<<(std::ostream &flux, Bureaucrat const &val)
{
	flux << val.getName() << ", bureaucrat grade " << val.getGrade() << std::endl;
	return (flux);
}
