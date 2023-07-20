/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:04:39 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/18 12:40:20 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void)
{
	std::cout << "\e[33m\e[1m#FIRST MAIN\e[0m" << std::endl;
	{
		Bureaucrat	emma("Emma Frost", 5);
		std::cout << emma << std::endl;

		Intern	randomFiles;

		Form	*rff;
		std::cout << std::endl;
		rff = randomFiles.makeForm("robotomy request", "Emma");
		if (rff)
		{
			std::cout << *rff << std::endl;
			rff->beSign(emma);
			std::cout << *rff << std::endl;
			emma.signForm(*rff);
			std::cout << std::endl;
			delete rff;
		}
	}
	std::cout << std::endl;
	std::cout << "\e[33m\e[1m#SECOND MAIN\e[0m" << std::endl;
	{
		Bureaucrat	magneto("Max Eisenhardt", 25);
		std::cout << magneto << std::endl;

		Intern	roberto;

		Form	*krakoa;
		std::cout << std::endl;
		krakoa = roberto.makeForm("presidential pardon", "Emma");
		if (krakoa)
		{
			std::cout << *krakoa << std::endl;
			krakoa->beSign(magneto);
			std::cout << *krakoa << std::endl;
			magneto.signForm(*krakoa);
			std::cout << std::endl;
			delete krakoa;
		}
	}
	std::cout << std::endl;
	std::cout << "\e[33m\e[1m#THIRD MAIN\e[0m" << std::endl;
	{
		Bureaucrat	professorX("Charles Xavier", 136);
		std::cout << professorX << std::endl;

		Intern	mystic;

		Form	*magna;
		std::cout << std::endl;
		magna = mystic.makeForm("shrubbery creation", "Charles Xavier");
		if (magna)
		{
			std::cout << *magna << std::endl;
			magna->beSign(professorX);
			magna->execute(professorX);
			std::cout << *magna << std::endl;
			professorX.signForm(*magna);
			std::cout << std::endl;
			delete magna;
		}
	}
	return (0);
}
