/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:48:27 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 13:40:43 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public :
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& copy);
	ScavTrap&	operator=(ScavTrap const& copy);
	void	getGuardGate(void);
	void	attack(const std::string& target);
	void	display(void);
	~ScavTrap();
private :
	void	guardGate(void);
};

#endif // # ................. SCAV_TRAP_HPP ................................ #


