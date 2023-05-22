/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:58:42 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/22 15:45:36 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav("\e[32m\e[1mSara\e[0m");
	ClapTrap	p_1("\e[33m\e[1mGarry\e[0m");
	ClapTrap	p_2("\e[35m\e[1mJu\e[0m");

	std::cout << std::endl;
	scav.display();
	p_1.display();
	p_2.display();

	scav.guardGate();

	p_1.takeDamage(5);
	scav.takeDamage(25);
	scav.attack("Goblin");
	p_2.attack("Goblin");

	ScavTrap	newScav = scav;

	std::cout << std::endl;
	scav.display();
	newScav.display();
	p_1.display();
	p_2.display();
	return (0);
}
