/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:57:35 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/11 14:57:36 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	newZombie;

	newZombie.setZombieName(name);
	std::cout << "Welcome to " << newZombie.getZombieName() << std::endl;
	newZombie.announce();
}
