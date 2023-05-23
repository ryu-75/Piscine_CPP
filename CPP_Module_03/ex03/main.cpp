/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:52:56 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 18:27:05 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamonTrap.hpp"

int	main(void)
{
// 	ClapTrap	c_1;	// Default name : Peter
// 	ScavTrap	s_1;	// Default name : Billy
// 	FragTrap	f_1;	// Default name : Harry
	DiamonTrap	d_1;	// Default name : Harry_clap_name

	// std::cout << std::endl;
	// c_1.attack("Goblin");
	// c_1.takeDamage(30);
	// c_1.beRepaired(5);
	d_1.getWhoAmI();
	// d_1.attack("Goblin");
	// d_1.takeDamage(25);
	// d_1.beRepaired(5);
	// s_1.attack("Elfe");
	// s_1.takeDamage(15);
	// s_1.beRepaired(5);
	// f_1.attack("Troll");
	// f_1.takeDamage(10);
	// f_1.beRepaired(5);

	std::cout << std::endl;
	// c_1.display();
	// s_1.display();
	// f_1.display();
	d_1.display();
	return (0);
}
