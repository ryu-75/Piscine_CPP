/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:58:42 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/19 19:04:43 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	firstPerson;
	ClapTrap	secondPerson("Jean");

	firstPerson.attack("Jean");
	secondPerson.takeDamage(2);
	secondPerson.beRepaired(1);
	secondPerson.display();
	return (0);
}
