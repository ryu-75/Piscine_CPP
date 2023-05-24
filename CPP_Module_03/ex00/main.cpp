/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:59:24 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/24 11:47:09 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a;
	ClapTrap	b("John");
	ClapTrap	c = b;

	a.attack("Goblin");
	b.attack("Black witch");
	c.attack("Troll");
	
	a.takeDamage(5);
	b.takeDamage(2);
	c.takeDamage(4);

	a.beRepaired(3);
	b.beRepaired(2);
	c.beRepaired(3);

	a.display();
	b.display();
	c.display();
	return (0);
}
