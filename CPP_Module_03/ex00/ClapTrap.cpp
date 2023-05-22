/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:58:44 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/22 15:06:37 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->m_name = "Peter";
	this->m_hitPoints = 10;
	this->m_energyPoints = 10;
	this->m_attackDamage = 0;
	std::cout << this->m_name << " was created."<< std::endl;
}

ClapTrap::ClapTrap(std::string name) : m_name(name)
{
	this->m_hitPoints = 10;
	this->m_energyPoints = 10;
	this->m_attackDamage = 0;
	std::cout << this->m_name << " was created."<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	std::cout << "Constructor copy is called: " << std::endl;
	m_name = copy.m_name;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& copy)
{
	if (this != &copy)
		m_name = copy.m_name;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!m_energyPoints)
		std::cout << "You don't have enough energy" << std::endl;
	else if (!m_hitPoints)
		std::cout << "What do you expected ? You're dead !" << std::endl;
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

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->m_name << " receive " << amount << " hit points." << std::endl;
	this->m_hitPoints += amount;
	std::cout << this->m_name << " lose 1 energy point." << std::endl;
	this->m_energyPoints--;
	if (this->m_hitPoints > 10)
		this->m_hitPoints = 10;
}

void	ClapTrap::display(void) const
{
	std::cout << "\e[39m\e[1m" << m_name << "\e[0m" << std::endl;
	std::cout << "Hit point : " << m_hitPoints << std::endl;
	std::cout << "Energy point : " << m_energyPoints << std::endl;
	std::cout << "Damage point : " << m_attackDamage << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->m_name << " was killed" << std::endl;
}
