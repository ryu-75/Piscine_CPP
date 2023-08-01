/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:00:04 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 13:58:38 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
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

		AForm*	makeForm(std::string formName, std::string target);

		class	InternException : public std::exception
		{
			virtual const char*	what() const throw();
		};
};

#endif // ******************* INTERN_HPP ************************
