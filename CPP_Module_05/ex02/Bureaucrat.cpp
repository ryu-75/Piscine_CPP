/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:51:07 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/03 11:51:36 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ******************* CONSTRUCTOR / DESTRUCTOR ******************************

Bureaucrat::Bureaucrat(const std::string &name, int grade) : m_name(name), m_grade(grade)
{
	std::cout << "Bureaucrat overload constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (const Bureaucrat::GradeTooHighException & e)
	{
		e.what();
	}
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const Bureaucrat::GradeTooLowException & e)
	{
		e.what();
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : m_name(copy.m_name), m_grade(copy.m_grade)
{
	std::cout << "Bureaucrat constructor copy called" << std::endl;
	try
	{
		if (this->m_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (const Bureaucrat::GradeTooHighException & e)
	{
		e.what();
	}
	try
	{
		if (this->m_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const Bureaucrat::GradeTooLowException & e)
	{
		e.what();
	}
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
		std::cout << "➡️  " << this->getName() << " cannot sign \e[34m\e[1m" << form.getName() << "\e[0m because grade is too low." << std::endl;
	else if (this->getGrade() <= 0)
		std::cout << "➡️  " << this->getName() << " cannot sign \e[34m\e[1m" << form.getName() << "\e[0m because grade is too high." << std::endl;
	else
		std::cout << "➡️  " << this->getName() << " signed \e[34m\e[1m" << form.getName() << "\e[0m"  << std::endl;
	form.beSign(*this);
}

std::ostream&	operator<<(std::ostream &flux, Bureaucrat const &val)
{
	flux << val.getName() << ", bureaucrat grade " << val.getGrade() << std::endl;
	return (flux);
}
