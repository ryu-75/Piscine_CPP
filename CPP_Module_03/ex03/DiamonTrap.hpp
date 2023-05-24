/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:22:40 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/24 19:26:42 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMON_TRAP_HPP
# define DIAMON_TRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamonTrap.hpp"

class DiamonTrap : virtual public ScavTrap, virtual public FragTrap
{
public :
	DiamonTrap();
	DiamonTrap(std::string const name);
	DiamonTrap(DiamonTrap const& copy);
	DiamonTrap&	operator=(DiamonTrap const& copy);
	void	getWhoAmI(void);
	void	attack(const std::string& target);
	void	display(void);
	~DiamonTrap();
private :
	void	whoAmI(void);
	std::string	m_name;
};

#endif // #................................. DIAMON_TRAP_HPP ..................................... #
