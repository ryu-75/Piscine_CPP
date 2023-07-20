/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:00:04 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/18 11:19:01 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

class	Intern
{
	public:
		Intern();
		Intern(Intern const &copy);
		Intern&	operator=(Intern const &rhs);
		~Intern();

		Form*	makeForm(std::string formName, std::string target);

		class	InternException : public std::exception
		{
			virtual const char*	what() const throw();
		};
};

#endif // ******************* INTERN_HPP ************************
