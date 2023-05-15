/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:27:03 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/12 16:54:41 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
}

void	HumanB::setWeapon(Weapon weapon)
{
	weapon.getType();
}

void	HumanB::attack(void) const
{
	std::cout << this->m_name << " attacks with their " << m_weapon->getType() << std::endl;
}
