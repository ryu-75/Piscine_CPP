/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:54:34 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 18:26:44 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamonTrap.hpp"

DiamonTrap::DiamonTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamonTrap default constructor called" << std::endl;
	this->m_name = "William";
}

DiamonTrap::DiamonTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamonTrap overload constructor called" << std::endl;
	this->m_name = ClapTrap::m_name + "_clap_name";
	// this->m_name = name;
	this->m_energyPoints = 50;
}

DiamonTrap::DiamonTrap(DiamonTrap const& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamonTrap constructor copy called" << std::endl;
	this->m_name = copy.m_name;
	this->m_energyPoints = copy.m_energyPoints;
	this->m_hitPoints = copy.m_hitPoints;
	this->m_attackDamage = copy.m_attackDamage;
}

DiamonTrap&	DiamonTrap::operator=(DiamonTrap const& copy)
{
	if (this != &copy)
	{
		this->m_name = copy.m_name;
		this->m_energyPoints = copy.m_energyPoints;
		this->m_hitPoints = copy.m_hitPoints;
		this->m_attackDamage = copy.m_attackDamage;
	}
	return (*this);
}

void	DiamonTrap::getWhoAmI(void)
{
	whoAmI();
}

void	DiamonTrap::whoAmI(void)
{
	std::cout << std::endl;
	std::cout << "DiamonTrap name : " << this->m_name << std::endl;
	std::cout << "ClapTrap name : " << this->ClapTrap::m_name << std::endl;
	std::cout << std::endl;
}

void	DiamonTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamonTrap::display(void) const
{
	std::cout << "\e[39m\e[1m" << this->m_name << "\e[0m" << std::endl;
	std::cout << "Hit point : " << this->m_hitPoints << std::endl;
	std::cout << "Energy point : " << this->m_energyPoints << std::endl;
	std::cout << "Damage point : " << this->m_attackDamage << std::endl;
	std::cout << std::endl;
}

DiamonTrap::~DiamonTrap()
{
	std::cout << "DiamonTrap destructor called" << std::endl;
}
