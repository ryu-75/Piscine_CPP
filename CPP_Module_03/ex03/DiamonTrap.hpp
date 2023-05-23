/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:54:44 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 17:24:36 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMON_TRAP_HPP
# define DIAMON_TRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamonTrap : public ScavTrap, public FragTrap
{
public :
	DiamonTrap();
	DiamonTrap(std::string name);
	DiamonTrap(DiamonTrap const& copy);
	DiamonTrap&	operator=(DiamonTrap const& copy);
	void	getWhoAmI(void);
	void	display(void) const;
	void	attack(std::string const& target);
	~DiamonTrap();

private :
	void	whoAmI(void);
	std::string	m_name;
};

#endif // #...................... DIAMON_TRAP_HPP ............................. #

