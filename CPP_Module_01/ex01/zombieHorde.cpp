/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:34:16 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/12 11:51:30 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*newHorde;

	newHorde = new Zombie[N];
	// On créé nos zombies
	for (int i = 0; i < N; i++)
	{
		newHorde[i].setZombieName(name);
		newHorde[i].announce();
	}
	return (newHorde);
}
