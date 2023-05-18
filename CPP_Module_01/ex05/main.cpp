/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:39:15 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 14:25:38 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "\e[36m\e[1m[DEBUG]\e[0m" << std::endl;
	std::cout << "> ";
	harl.complain("DEBUG");
	std::cout << "\e[32m\e[1m[INFO]\e[0m" << std::endl;
	std::cout << "> ";
	harl.complain("INFO");
	std::cout << "\e[33m\e[1m[WARNING]\e[0m" << std::endl;
	std::cout << "> ";
	harl.complain("WARNING");
	std::cout << "\e[31m\e[1m[ERROR]\e[0m" << std::endl;
	std::cout << "> ";
	harl.complain("ERROR");
	return (0);
}
