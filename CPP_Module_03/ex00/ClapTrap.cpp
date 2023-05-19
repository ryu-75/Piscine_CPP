/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:58:44 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/19 18:15:53 by nlorion          ###   ########.fr       */
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
	std::cout << this->m_name << " was created."<< std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << this->m_name << " attacks " << target;
	std::cout << ", causing " << this->m_attackDamage << " points of damage!" << std::endl;
	if (!m_energyPoints)
		std::cout << "You don't have enough energy" << std::endl;
	else if (!m_hitPoints)
		std::cout << "What do you expected ? You're dead !" << std::endl;
	else
	{
		std::cout << this->m_name << " " << this->m_hitPoints << std::endl;
		takeDamage(this->m_attackDamage);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->m_hitPoints -= amount;
	if (this->m_hitPoints < 0)
		this->m_hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->m_hitPoints += amount;
	this->m_energyPoints--;
	if (this->m_hitPoints > 10)
		this->m_hitPoints = 10;
}

void	ClapTrap::display(void) const
{
	std::cout << "\e[39m\e[1m" << m_name << "\e[0m" << std::endl;
	std::cout << "Hit point : " << m_hitPoints << std::endl;
	std::cout << "Energy point : " << m_energyPoints << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->m_name << " was killed" << std::endl;
}
