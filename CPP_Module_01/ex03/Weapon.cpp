/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:26:54 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/12 16:42:06 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructeur
Weapon::Weapon(std::string type)
{
	setType(type);
}

void	Weapon::setType(std::string type)
{
	this->m_type = type;
}

const std::string& Weapon::getType(void) const
{
	return (this->m_type);
}
