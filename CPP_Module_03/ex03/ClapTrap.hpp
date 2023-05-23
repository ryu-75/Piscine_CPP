/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:58:46 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 17:35:24 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& copy);
	ClapTrap&	operator=(ClapTrap const& copy);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	checkEnergy(void);
	virtual void	display(void) const;
	~ClapTrap();

protected:
	std::string	m_name;
	int	m_hitPoints;
	int	m_energyPoints;
	int	m_attackDamage;
};

#endif // #..................... CLAP_TRAP_HPP .............................. #
