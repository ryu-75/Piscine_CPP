/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:22:33 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/12 12:11:58 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombies;
	std::string	name;

	std::cout << "Give a name to your horde of zombies :" << std::endl;
	std::cout << "> ";
	std::getline(std::cin, name);
	zombies = zombieHorde(5, name);
	std::cout << "Now you have a horde of " << name << std::endl;
	delete []	zombies;
	std::cout << "Oups ! They're all dead" << std::endl;
	return (0);
}
