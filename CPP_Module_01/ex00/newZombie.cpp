/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:37:38 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/11 14:49:18 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	newZombie;
	newZombie = new Zombie();
	newZombie->setZombieName(name);
	std::cout << "Hello my name is " << newZombie->getZombieName() << std::endl;
	return (newZombie);
}
