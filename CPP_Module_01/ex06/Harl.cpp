/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:16:25 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 14:30:33 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "\e[36m\e[1m[DEBUG]\e[0m" << std::endl;
	std::cout << "> ";
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special ";
	std::cout << "ketchup burger. I really do !" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\e[32m\e[1m[INFO]\e[0m" << std::endl;
	std::cout << "> ";
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger ! ";
	std::cout << "If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\e[33m\e[1m[WARNING]\e[0m" << std::endl;
	std::cout << "> ";
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\e[31m\e[1m[ERROR]\e[0m" << std::endl;
	std::cout << "> ";
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	size_t	i;
	size_t	len;
	const std::string	my_Array[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	len = my_Array->size();
	for ( ; i < len && level.compare(my_Array[i]); i++)
	{
		if (i == (len - 1))
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
		}
	}
	switchSelection(i);
}

void	Harl::switchSelection(size_t i)
{
	switch(i)
	{
		case 0:
			debug();
			__attribute__((fallthrough));
		case 1:
			info();
			__attribute__((fallthrough));
		case 2:
			warning();
			__attribute__((fallthrough));
		case 3:
			error();
			break;
		default:
			;
	}
}
