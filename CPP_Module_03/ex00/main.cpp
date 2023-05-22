/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:58:42 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/22 15:07:12 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	firstPerson("Jean");
	ClapTrap	secondPerson("Kevin");

	firstPerson.takeDamage(5);
	secondPerson.takeDamage(6);

	std::cout << std::endl;
	firstPerson.display();
	std::cout << std::endl;
	secondPerson.display();
	std::cout << std::endl;

	ClapTrap	thirdPersonn;

	thirdPersonn = secondPerson;
	thirdPersonn.attack("Troll");

	secondPerson.beRepaired(2);
	firstPerson.beRepaired(1);

	std::cout << std::endl;
	firstPerson.display();
	std::cout << std::endl;
	secondPerson.display();
	std::cout << std::endl;
	thirdPersonn.display();
	std::cout << std::endl;
	return (0);
}