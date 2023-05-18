/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:27:03 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 12:48:06 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->m_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->m_name << " attacks with their " << m_weapon->getType() << std::endl;
}
