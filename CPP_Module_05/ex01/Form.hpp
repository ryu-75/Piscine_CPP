/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:03:48 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/18 12:43:33 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP



#include <iostream>
#include <string>
class	Form;
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(const std::string &name, const int signGrade, const int execGrade);
		Form	&operator=(Form const &copy);
		Form(Form const &rhs);
		virtual ~Form();
		std::string const	&getName(void) const;
		int	getSignGrade(void) const;
		int	getExecGrade(void) const;
		bool	getSign(void) const;
		void	beSign(Bureaucrat const &bureaucrat);
		class	FormAlreadySign : public std::exception
		{
			virtual const char*	what() const throw();
		};
		class	GradeTooHighException : public std::exception
		{
			virtual const char*	what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			virtual const char*	what() const throw();
		};
	private:
		Form();
		
		const std::string	&m_name;
		bool	m_sign;
		const int	m_signGrade;
		const int	m_execGrade;
};

std::ostream&	operator<<(std::ostream &flux, Form const &form);
#endif // *************** FORM_HPP **********************
