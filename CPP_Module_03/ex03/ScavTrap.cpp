/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:55:15 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 16:49:18 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor are called" << std::endl;
	m_name = "\e[36m\e[1mBilly\e[0m";
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap overloaded constructor are called" << std::endl;
	this->m_name = name;
}

ScavTrap::ScavTrap(ScavTrap const& copy)
{
	std::cout << "ScavTrap copy constructor are called" << std::endl;
	m_name = copy.m_name;
	m_attackDamage = copy.m_attackDamage;
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& copy)
{
	if (this != &copy)
	{
		m_name = copy.m_name;
		m_attackDamage = copy.m_attackDamage;
		m_hitPoints = copy.m_hitPoints;
		m_energyPoints = copy.m_energyPoints;
	}
	return (*this);
}

void	ScavTrap::getGuardGate(void)
{
	guardGate();
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->m_name << " launch the Gate Keeper mode" << std::endl;
}

void	ScavTrap::display(void) const
{
	std::cout << "\e[39m\e[1m" << m_name << "\e[0m" << std::endl;
	std::cout << "Hit point : " << m_hitPoints << std::endl;
	std::cout << "Energy point : " << m_energyPoints << std::endl;
	std::cout << "Damage point : " << m_attackDamage << std::endl;
	std::cout << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deconstructor are called for " << this->m_name << std::endl;
}
