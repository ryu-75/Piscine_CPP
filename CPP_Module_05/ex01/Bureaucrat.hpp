/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:48:36 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/13 17:47:39 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP
#include <iostream>
#include <string>
class	Bureaucrat;
#include "Form.hpp"

class	Bureaucrat
{
	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat& operator=(Bureaucrat const &rhs);
		virtual ~Bureaucrat();
		std::string	getName(void) const;
		int	getGrade(void) const;
		void	toDecrement(void);
		void	toIncrement(void);
		void	signForm(Form &form) const;
		class	GradeTooHighException : public std::exception
		{
			virtual const char*	what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			virtual const char*	what() const throw();
		};
	private:
		Bureaucrat();
		const std::string	m_name;
		int					m_grade;
};

std::ostream&	operator<<(std::ostream &flux, Bureaucrat const &val);
#endif // ************************ BUREAUCRAT_HPP ************************
