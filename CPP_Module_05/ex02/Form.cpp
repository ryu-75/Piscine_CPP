/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:03:49 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/17 18:07:38 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// ***************** CONSTRUCTOR / DECONSTRUCTOR ***********************

Form::Form(const std::string &name, const int signGrade, const int execGrade) :
		m_name(name), m_signGrade(signGrade), m_execGrade(execGrade)
{
	std::cout << "Form overload constructor called" << std::endl;
	this->m_sign = false;
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &rhs) :
		m_name(rhs.m_name), m_sign(rhs.m_sign), m_signGrade(rhs.m_signGrade), m_execGrade(rhs.m_execGrade)
{
	std::cout << "Form constructor copy called" << std::endl;
	if (this->m_signGrade < 1 || this->m_execGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->m_signGrade > 150 || this->m_execGrade > 150)
		throw Form::GradeTooLowException();
}

Form	&Form::operator=(Form const &copy)
{
	this->m_sign = copy.m_sign;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

// ********************* GETTER *****************************

std::string const	&Form::getName(void) const
{
	return (this->m_name);
}

int	Form::getSignGrade(void) const
{
	return (this->m_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->m_execGrade);
}

bool	Form::getSign(void) const
{
	return (this->m_sign);
}

void	Form::beSign(Bureaucrat const &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() <= this->m_signGrade)
			this->m_sign = true;
		else if (bureaucrat.getGrade() > this->m_signGrade)
			throw Form::GradeTooLowException();
		else
			throw Form::GradeTooHighException();
	}
	catch(Form::GradeTooHighException &e)
	{
		e.what();
	}
	catch(Form::GradeTooLowException &e)
	{
		e.what();
	}
}

void	Form::execute(Bureaucrat const &bureaucrat) const
{
	try
	{
		if (bureaucrat.getGrade() <= this->getExecGrade() && this->getSign() == true)
			execForm();
		else
			throw Form::UnsignedFormExec();
	}
	catch (Form::UnsignedFormExec &e)
	{
		e.what();
	}
}

std::ostream&	operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << " is " << ((form.getSign()) ? "signed" : "unsigned");
	out << std::endl << "Grade to signed → " << form.getSignGrade();
	out << std::endl << "Grade to execute → " << form.getExecGrade();
	out << std::endl;
	return (out);
}
