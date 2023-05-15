/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:27:07 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/12 16:41:06 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
public:
	Weapon(std::string type);
	void	setType(std::string type);
	const std::string&	getType() const;
private:
	std::string	m_type;
};

#endif // #............. WEAPON_HPP ................ #
