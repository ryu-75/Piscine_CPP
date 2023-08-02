/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:03:49 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/02 20:29:50 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

// ***************** CONSTRUCTOR / DECONSTRUCTOR ***********************

AForm::AForm() : m_name("unknow"), m_signGrade(145), m_execGrade(145)
{
	std::cout << "AForm default constructor called" << std::endl;
	m_sign = false;
}

AForm::AForm(const std::string &name, const int signGrade, const int execGrade) :
		m_name(name), m_signGrade(signGrade), m_execGrade(execGrade)
{
	std::cout << "AForm overload constructor called" << std::endl;
	this->m_sign = false;
	try
	{
		if (signGrade < 1 || execGrade < 1)
			throw AForm::GradeTooHighException();
		else if (signGrade > 150 || execGrade > 150)
			throw AForm::GradeTooLowException();	
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}	
}

AForm::AForm(AForm const &rhs) :
		m_name(rhs.m_name), m_sign(rhs.m_sign), m_signGrade(rhs.m_signGrade), m_execGrade(rhs.m_execGrade)
{
	std::cout << "AForm constructor copy called" << std::endl;
	try
	{
		if (this->m_signGrade < 1 || this->m_execGrade < 1)
			throw AForm::GradeTooHighException();
		else if (this->m_signGrade > 150 || this->m_execGrade > 150)
			throw AForm::GradeTooLowException();
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
}

AForm	&AForm::operator=(AForm const &copy)
{
	this->m_sign = copy.m_sign;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

// ********************* GETTER *****************************

std::string const	&AForm::getName(void) const
{
	return (this->m_name);
}

int	AForm::getSignGrade(void) const
{
	return (this->m_signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (this->m_execGrade);
}

bool	AForm::getSign(void) const
{
	return (this->m_sign);
}

// ********************* METHODS *****************************

void	AForm::beSign(Bureaucrat const &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() != 0 && \
			bureaucrat.getGrade() <= this->m_signGrade)
			this->m_sign = true;
		else if (bureaucrat.getGrade() < this->m_signGrade || \
			bureaucrat.getGrade() <= 0)
			throw AForm::GradeTooHighException();
		else
			throw AForm::GradeTooLowException();
	}
	catch(AForm::GradeTooHighException &e)
	{
		e.what();
	}
	catch(AForm::GradeTooLowException &e)
	{
		e.what();
	}
}

void	AForm::execute(Bureaucrat const &bureaucrat) const
{
	try
	{
		if (bureaucrat.getGrade() <= this->getExecGrade() && this->getSign() == true)
			execForm();
		else
			throw AForm::UnsignedFormExec();
	}
	catch (AForm::UnsignedFormExec &e)
	{
		e.what();
	}
}

// ********************* OPERATOR *****************************

std::ostream&	operator<<(std::ostream &out, AForm const &form)
{
	out << form.getName() << " is " << ((form.getSign()) ? "signed" : "unsigned");
	out << std::endl << "Grade to signed → " << form.getSignGrade();
	out << std::endl << "Grade to execute → " << form.getExecGrade();
	out << std::endl;
	return (out);
}
