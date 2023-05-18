/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:19:13 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 12:38:26 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	void	setWeapon(Weapon &weapon);
	void	attack() const;
private:
	std::string	m_name;
	Weapon	*m_weapon;
};

#endif // #............. HUMAN_B_HPP ...................... #
