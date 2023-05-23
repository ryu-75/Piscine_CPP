/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:45:34 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 16:49:30 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& copy);
	ScavTrap&	operator=(ScavTrap const& copy);
	void	getGuardGate(void);
	void	display(void) const;
	~ScavTrap();
private:
	void	guardGate(void);
};

#endif // #......................... SCAV_TRAP_HPP ............................ #