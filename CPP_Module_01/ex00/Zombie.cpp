/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:57:31 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/11 14:57:32 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "# \e[94m A ZOMBIE IS BORN \e[0m#" << std::endl << std::endl;
}

void	Zombie::setZombieName(std::string name)
{
	this->m_name = name;
}

std::string	Zombie::getZombieName(void)
{
	return (this->m_name);
}

void	Zombie::announce(void)
{
	std::cout << "\e[92m" << this->m_name << "\e[0m" << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->m_name <<  " is \e[91m dead \e[0m!" << std::endl << std::endl;
}
