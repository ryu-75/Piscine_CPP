/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:04:39 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/02 19:57:01 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	std::cout << "\e[33m\e[1m#FIRST MAIN\e[0m" << std::endl;
	{
		Bureaucrat	lorna("Lorna Dane", 136);
		std::cout << lorna << std::endl;

		AForm	*trees = new ShrubberyCreationForm("Schrub", "Lorna");
		std::cout << std::endl;
		std::cout << *trees << std::endl;

		trees->beSign(lorna);

		std::cout << *trees;
		trees->execute(lorna);

		delete trees;
	}
	std::cout << std::endl;
	std::cout << "\e[33m\e[1m#SECOND MAIN\e[0m" << std::endl;
	{
		Bureaucrat	scott("Scott Summer", 5);
		std::cout << scott << std::endl;

		AForm	*forgiven = new PresidentialPardonForm("So Sorry !", "Scott");
		std::cout << std::endl;
		std::cout << *forgiven << std::endl;

		forgiven->beSign(scott);
		forgiven->execute(scott);
		std::cout << std::endl;

		delete forgiven;
	}
	std::cout << std::endl;
	std::cout << "\e[33m\e[1m#THREE MAIN\e[0m" << std::endl;
	{
		Bureaucrat	jean("Jean Grey", 44);
		std::cout << jean << std::endl;

		AForm	*robot = new RobotomyRequestForm("robot", "Jean");
		std::cout << std::endl;
		std::cout << *robot << std::endl;

		robot->beSign(jean);
		robot->execute(jean);
		std::cout << std::endl;

		delete robot;
	}
	return (0);
}
