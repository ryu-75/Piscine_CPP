/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:59:24 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/24 18:20:14 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	a("Harry");
	ScavTrap	b;
	FragTrap	c;

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
	a.display();
	b.display();
	c.display();
	std::cout << std::endl;
	return (0);
}
