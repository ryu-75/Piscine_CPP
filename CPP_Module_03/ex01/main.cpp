/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:59:24 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/24 17:55:42 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a;
	ClapTrap	b("Harry");
	ScavTrap	c = a;

	a.getGuardGate();
	a.attack("Goblin");
	a.takeDamage(5);
	a.beRepaired(2);

	b.attack("Troll");
	b.takeDamage(3);
	b.beRepaired(1);

	c.attack("Paladin");
	c.takeDamage(8);
	c.beRepaired(4);

	a.display();
	b.display();
	c.display();
	return (0);
}
