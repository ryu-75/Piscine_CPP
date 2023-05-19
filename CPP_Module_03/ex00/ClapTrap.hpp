/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:58:46 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/19 18:15:16 by nlorion          ###   ########.fr       */
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
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	display(void) const;
	~ClapTrap();

private:
	std::string	m_name;
	unsigned int	m_hitPoints;
	unsigned int	m_energyPoints;
	int	m_attackDamage;
};

#endif // #..................... CLAP_TRAP_HPP .............................. #
