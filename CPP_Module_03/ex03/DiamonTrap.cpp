/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:22:37 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 14:18:06 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamonTrap.hpp"

DiamonTrap::DiamonTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamonTrap default constructor called" << std::endl;
	m_name = "Jean";
	ClapTrap::m_name = m_name + "_clap_name";
	m_energy = 50;
}

DiamonTrap::DiamonTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamonTrap overload constructor called" << std::endl;
	m_name = name;
	ClapTrap::m_name = m_name + "_clap_name";
	m_energy = 50;
}

DiamonTrap::DiamonTrap(DiamonTrap const& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamonTrap constructor copy called" << std::endl;
	m_name = copy.m_name;
	m_energy = copy.m_energy;
	m_hit = copy.m_damage;
	m_damage = copy.m_damage;
}

DiamonTrap&	DiamonTrap::operator=(DiamonTrap const& copy)
{
	m_name = copy.m_name;
	m_energy = copy.m_energy;
	m_hit = copy.m_hit;
	m_damage = copy.m_damage;
	return (*this);
}

void	DiamonTrap::getWhoAmI(void)
{
	whoAmI();
}

void	DiamonTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamonTrap::whoAmI(void)
{
	std::cout << RED BOLD << m_name << R << " called himself with " << ClapTrap::m_name << std::endl;
}

void	DiamonTrap::display(void)
{
	std::cout << std::endl;
	std::cout << BOLD RED << m_name << R << std::endl;
	std::cout << "Hit points : " << m_hit << std::endl;
	std::cout << "Energy points : " << m_energy << std::endl;
	std::cout << "Damage points : " << m_damage << std::endl;
}

DiamonTrap::~DiamonTrap()
{
	std::cout << "DiamonTrap destructor called" << std::endl;
}
