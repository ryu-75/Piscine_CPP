/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:39:57 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/24 18:11:20 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

// ............ [COLORS] ......................

#define WHITE "\e[39m"
#define R "\e[0m"
#define BOLD "\e[1m"
#define GREEN "\e[32m"
#define BLUE "\e[36m"

#include <iostream>
#include <string>

class ClapTrap
{
public :
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& copy);
	ClapTrap&	operator=(ClapTrap const& copy);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	display(void);
	~ClapTrap();
protected :
	std::string	m_name;
	int	m_hit;
	int	m_energy;
	int	m_damage;
};

#endif //#................... CLAP_TRAP_HPP ................................#
