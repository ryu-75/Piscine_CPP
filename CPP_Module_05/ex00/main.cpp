/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:09:00 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/12 13:31:41 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\e[33m\e[1m# FIRST MAIN #\e[0m" << std::endl;
	{
		Bureaucrat	lorna("Lorna Dane", 1);

		std::cout << std::endl;
		std::cout << "👩  Can you introduce yourself ?" << std::endl;
		std::cout << "👱  " << lorna << std::endl;
		std::cout << std::endl;
		std::cout << "👩  Now "<< lorna.getName() << ", what your grade is ?" << std::endl;
		lorna.toIncrement();
		lorna.toDecrement();
		std::cout << std::endl;
		std::cout << "👱  " << lorna << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[33m\e[1m# SECOND MAIN #\e[0m" << std::endl;
	{
		Bureaucrat	scott("Scott Summer", 150);

		std::cout << std::endl;
		std::cout << "👩  Can you introduce yourself ?" << std::endl;
		std::cout << "👱  " << scott << std::endl;
		std::cout << std::endl;
		std::cout << "👩  Now "<< scott.getName() << ", what your grade is ?" << std::endl;
		scott.toDecrement();
		scott.toIncrement();
		std::cout << "👱  " << scott << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[33m\e[1m# THIRD MAIN #\e[0m" << std::endl;
	{
		try
		{
			Bureaucrat	pietro("Pietro Maximoff", 0);
			std::cout << std::endl;
			std::cout << pietro << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what();
		}
	}
	std::cout << std::endl;
	std::cout << "\e[33m\e[1m# FOURTH MAIN #\e[0m" << std::endl;
	{
		try
		{
			Bureaucrat	jean("Jean Grey", 151);
			std::cout << std::endl;
			std::cout << jean << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what();
		}
	}
	return (0);
}
