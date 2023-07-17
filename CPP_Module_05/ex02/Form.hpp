/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:03:48 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/17 17:53:27 by nlorion          ###   ########.fr       */
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

		virtual void	execute(Bureaucrat const &bureaucrat) const;
		virtual void	execForm(void) const = 0;
		class	FormAlreadySign
		{
			public :
				virtual void	what() const throw()
				{
					std::cout << "🔺  Exception : Form is already signed" << std::endl;
				}
		};
		class	GradeTooHighException
		{
			public :
				virtual void	what() const throw()
				{
					std::cout <<"🔺  Exception : Grade too high" << std::endl;
				}
		};
		class	GradeTooLowException
		{
			public :
				virtual void	what() const throw()
				{
					std::cout << "🔺  Exception : Grade too low" << std::endl;
				}
		};
		class	UnsignedFormExec
		{
			public :
				virtual void	what() const throw()
				{
					std::cout << "🔺  Exception : Unsigned form can not execute" << std::endl;
				}
		};

	private:
		Form();
		const std::string	&m_name;
		bool	m_sign;
		const int	m_signGrade;
		const int	m_execGrade;
};

std::ostream&	operator<<(std::ostream &out, Form const &form);
#endif // *************** FORM_HPP **********************
