/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:09:09 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/12 12:05:28 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	m_name;

public:
	Zombie();
	void	setZombieName(std::string name);
	void	announce();
	std::string	getZombieName(void);
	~Zombie();
};

// #............. PROTOTYPE ................. #

Zombie*	zombieHorde(int N, std::string name);
void	killZombies(int N, Zombie* zombies);
#endif //#........... ZOMBIE_HPP .........#
