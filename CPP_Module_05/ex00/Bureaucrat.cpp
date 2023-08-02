/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:51:07 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/02 19:20:17 by nlorion          ###   ########.fr       */
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
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();	
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : m_name(copy.m_name), m_grade(copy.m_grade)
{
	std::cout << "Bureaucrat constructor copy called" << std::endl;
	try
	{
		if (this->m_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->m_grade > 150)
			throw Bureaucrat::GradeTooLowException();		
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs)
{
	this->m_grade = rhs.m_grade;
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

// ********************* EXCEPTION *****************************

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("🔺  Exception : Grade too high\n");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("🔺  Exception : Grade too low\n");
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
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
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
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
}

std::ostream&	operator<<(std::ostream &flux, Bureaucrat const &val)
{
	flux << val.getName() << ", bureaucrat grade " << val.getGrade();
	return (flux);
}
