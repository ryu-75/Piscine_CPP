/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:55:15 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/22 15:41:16 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor are called" << std::endl;
	m_name = "Billy";
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap overloaded constructor are called" << std::endl;
	this->m_name = name;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
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

void	ScavTrap::guardGate(void)
{
	std::cout << this->m_name << " launch the Gate Keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deconstructor are called for " << this->m_name << std::endl;
}
