/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:39:52 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/24 11:46:38 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("Peter")
{
	std::cout << "Default constructor called" << std::endl;
	m_hit = 10;
	m_energy = 10;
	m_damage = 0;
}

ClapTrap::ClapTrap(std::string name) : m_name(name)
{
	std::cout << "Overload constructor called" << std::endl;
	m_hit = 10;
	m_energy = 10;
	m_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	std::cout << "Constructor copy called" << std::endl;
	m_name = copy.m_name + "_copy";
	m_hit = copy.m_hit;
	m_energy = copy.m_energy;
	m_damage = copy.m_damage;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& copy)
{
	if (this != &copy)
	{
		m_name = copy.m_name;
		m_hit = copy.m_hit;
		m_energy = copy.m_energy;
		m_damage = copy.m_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (m_hit == 0)
		std::cout << "You can't attack your fow, you're dead dude !" << std::endl;
	else if (m_energy == 0)
		std::cout << "You don't have enough energy to attack" << std::endl;
	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_damage << " points of damage!" << std::endl;
	m_energy--;
	if (m_energy < 0)
		m_energy = 0;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	m_hit -= amount;
	if (m_hit < 0)
		m_hit = 0;
	std::cout << m_name << " lose " << amount << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (m_hit == 0)
		std::cout << "You can't attack your fow, you're dead dude !" << std::endl;
	else if (m_energy == 0)
		std::cout << "You don't have enough energy to repaire yourself" << std::endl;
	m_hit += amount;
	m_energy--;
	if (m_energy < 0)
		m_energy = 0;
	std::cout << m_name << " retrieve " << amount << " hit points" << std::endl;
}

void	ClapTrap::display(void)
{
	std::cout << std::endl;
	std::cout  << m_name << std::endl;
	std::cout << "Hit points : " << m_hit << std::endl;
	std::cout << "Energy points : " << m_energy << std::endl;
	std::cout << "Damage points : " << m_damage << std::endl;

}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
