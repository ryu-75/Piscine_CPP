/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:26:59 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 12:48:02 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(weapon)
{
}

void	HumanA::attack(void) const
{
	std::cout << this->m_name << " attacks with their " << this->m_weapon.getType() << std::endl;
}
