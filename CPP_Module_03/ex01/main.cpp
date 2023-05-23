/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:52:46 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 12:28:50 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	ScavTrap	s_1;	// Default name "Billy"
	ClapTrap	c_1;
	ClapTrap	c_2("\e[33m\e[1mJohn\e[0m");

	ScavTrap	copy_s1 = s_1;	// Billy copy

	std::cout << std::endl;
	c_1.attack("Goblin");
	c_1.takeDamage(11);
	s_1.takeDamage(15);
	c_1.attack("\e[34m\e[1mJohn\e[0m");
	copy_s1.attack("Troll");
	c_2.attack("Golum");
	s_1.getGuardGate();		// Billy
	copy_s1.getGuardGate();	// Billy copy

	std::cout << std::endl;
	s_1.display();
	c_1.display();
	c_2.display();
	copy_s1.display();
	return (0);
}
