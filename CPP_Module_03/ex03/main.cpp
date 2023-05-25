/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:59:24 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 14:15:19 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamonTrap.hpp"

int	main(void)
{
	ClapTrap	a;
	ScavTrap	b;
	FragTrap	c;
	DiamonTrap	d;

	std::cout << std::endl;
	a.attack("Troll");
	a.takeDamage(3);
	a.beRepaired(1);
	std::cout << std::endl;
	b.getGuardGate();
	b.attack("Goblin");
	b.takeDamage(5);
	b.beRepaired(2);
	std::cout << std::endl;
	c.attack("Paladin");
	c.takeDamage(8);
	c.beRepaired(4);
	c.getHighFivesGuys();
	std::cout << std::endl;
	d.attack("Paladin");
	d.takeDamage(8);
	d.beRepaired(4);
	d.getWhoAmI();

	a.display();
	b.display();
	c.display();
	d.display();
	std::cout << std::endl;
	return (0);
}
