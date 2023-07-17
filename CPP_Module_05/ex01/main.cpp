/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:04:39 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/17 12:07:32 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\e[33m\e[1m#FIRST MAIN\e[0m" << std::endl;
	{
		Bureaucrat	lorna("Lorna Dane", 5);
		Form	taxes("taxes", 5, 10);
		std::cout << std::endl;

		std::cout << "👧  " << lorna << std::endl;
		std::cout << "💹  " << taxes << std::endl;

		try
		{
			lorna.signForm(taxes);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			lorna.signForm(taxes);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << '\n';
		}

		lorna.toDecrement();
		std::cout << std::endl;
		Form	xmenPlan("Xmen plan", 5, 20);
		std::cout << std::endl;

		std::cout << "👧  " << lorna << std::endl;
		std::cout << "💀  " << xmenPlan << std::endl;

		try
		{
			lorna.signForm(xmenPlan);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;

		lorna.toIncrement();
		lorna.toIncrement();
		std::cout << "👧  " << lorna << std::endl;
		std::cout << "💀  " << xmenPlan << std::endl;
		std::cout << std::endl;

		try
		{
			lorna.signForm(xmenPlan);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}
		std::cout << std::endl;
		std::cout << "\e[33m\e[1m#SECOND MAIN\e[0m" << std::endl;
	{
		Bureaucrat	scott("Scott Summer", 1);
		Form	topSecret("Top secret", 1, 5);

		std::cout << std::endl;
		std::cout << "👱  " << scott << std::endl;
		std::cout << "👾  " << topSecret << std::endl;

		scott.toIncrement();
		scott.toDecrement();
		std::cout << "👱  " << scott << std::endl;
		try
		{
			scott.signForm(topSecret);
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << "\n";
		}
		std::cout << std::endl;
	}
	return (0);
}
