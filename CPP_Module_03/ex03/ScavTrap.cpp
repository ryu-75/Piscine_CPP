/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:48:24 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/24 18:17:16 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
	m_hit = 100;
	m_energy = 50;
	m_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap overload constructor" << std::endl;
	m_name = name;
	m_hit = 100;
	m_energy = 50;
	m_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "ScavTrap constructor copy" << std::endl;
}

void	ScavTrap::getGuardGate(void)
{
	guardGate();
}

void	ScavTrap::guardGate(void)
{
	std::cout << BOLD BLUE << ClapTrap::m_name << R << " activated guard gate mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (m_hit == 0)
		std::cout << "You can't attack your fow, you're dead dude !" << std::endl;
	else if (m_energy == 0)
		std::cout << "You don't have enough energy to attack" << std::endl;
	std::cout << "ScavTrap " << BOLD BLUE << m_name << R << " attacks " << target << ", causing " << m_damage << " points of damage!" << std::endl;
	m_energy--;
	if (m_energy < 0)
		m_energy = 0;
}

void	ScavTrap::display(void)
{
	std::cout << std::endl;
	std::cout << BOLD BLUE << m_name << R << std::endl;
	std::cout << "Hit points : " << m_hit << std::endl;
	std::cout << "Energy points : " << m_energy << std::endl;
	std::cout << "Damage points : " << m_damage << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
