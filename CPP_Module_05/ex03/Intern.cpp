/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:00:06 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 13:58:26 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <cstring>

// ***************** CONSTRUCTOR / DECONSTRUCTOR ***********************

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern&	Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
		return (*this);
	else
		return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

// ********************* METHOD *****************************

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	int	i = 0;

	const char	*array[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	for ( ; i < 3 && formName.compare(array[i]) != 0; i++)
		;
	switch (i)
	{
		case (0):
			return (new RobotomyRequestForm(formName, target));
		case (1):
			return (new PresidentialPardonForm(formName, target));
		case (2):
			return (new ShrubberyCreationForm(formName, target));
		default:
			std::cout << "Intern try to sign a form doesn't exist" << std::endl;
			return (NULL);
	}
}
