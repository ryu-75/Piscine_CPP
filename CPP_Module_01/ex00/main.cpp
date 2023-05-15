/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:41:11 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/11 14:49:38 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	newZombies;

	randomChump("José");
	newZombies = newZombie("Peter");
	newZombies->announce();
	std::cout << "Zombie on heap is " << newZombies->getZombieName() << std::endl;
	delete newZombies;
	return (0);
}
