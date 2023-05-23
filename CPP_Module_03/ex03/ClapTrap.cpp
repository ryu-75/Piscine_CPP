/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:58:44 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 18:21:31 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("\e[32m\e[1mPeter\e[0m")
{
	this->m_hitPoints = 10;
	this->m_energyPoints = 10;
	this->m_attackDamage = 0;
	std::cout << "ClapTrap default constructor are called"<< std::endl;
}

ClapTrap::ClapTrap(std::string name) : m_name(name)
{
	std::cout << "ClapTrap overload constructor are called"<< std::endl;
	this->m_name = name;
	this->m_hitPoints = 10;
	this->m_energyPoints = 10;
	this->m_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	std::cout << "ClapTrap Constructor copy are called" << std::endl;
	this->m_name = copy.m_name;
	this->m_attackDamage = copy.m_attackDamage;
	this->m_energyPoints = copy.m_energyPoints;
	this->m_hitPoints = copy.m_hitPoints;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& copy)
{
	if (this != &copy)
	{
		m_name = copy.m_name;
		this->m_attackDamage = copy.m_attackDamage;
		this->m_energyPoints = copy.m_energyPoints;
		this->m_hitPoints = copy.m_hitPoints;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	checkEnergy();
	if (!m_energyPoints)
		std::cout << "You don't have enough energy" << std::endl;
	else if (!m_hitPoints)
		std::cout << "What do you expected " << this->m_name << " ? You're dead !" << std::endl;
	else
	{
		std::cout << this->m_name << " attacks " << target;
		std::cout << ", causing " << this->m_attackDamage << " points of damage!" << std::endl;
		std::cout << this->m_name << " lose 1 energy point." << std::endl;
		this->m_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << m_name << " receive " << amount << " points of damage !" << std::endl;
	this->m_hitPoints -= amount;
	if (this->m_hitPoints < 0)
		this->m_hitPoints = 0;
}

void	ClapTrap::checkEnergy(void)
{
	if (this->m_energyPoints == 0)
		std::cout << "You don't have enough energy" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	checkEnergy();
	std::cout << this->m_name << " receive " << amount << " hit points." << std::endl;
	this->m_hitPoints += amount;
	std::cout << this->m_name << " lose 1 energy point." << std::endl;
	this->m_energyPoints--;
}

void	ClapTrap::display(void) const
{
	std::cout << "\e[39m\e[1m" << this->m_name << "\e[0m" << std::endl;
	std::cout << "Hit point : " << this->m_hitPoints << std::endl;
	std::cout << "Energy point : " << this->m_energyPoints << std::endl;
	std::cout << "Damage point : " << this->m_attackDamage << std::endl;
	std::cout << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor are called for " << this->m_name << std::endl;
}
