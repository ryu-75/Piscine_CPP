/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:21:20 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 14:12:58 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FrapTrap.hpp"

FrapTrap::FrapTrap()
{
	std::cout << "FrapTrap default constructor called" << std::endl;
	this->m_name = "\e[31m\e[1mHarry\e[0m";
	this->m_hitPoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
}

FrapTrap::FrapTrap(std::string name)
{
	std::cout << "FrapTrap overload constructor called" << std::endl;
	this->m_name = name;
	this->m_hitPoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
}

FrapTrap::FrapTrap(FrapTrap const& copy)
{
	std::cout << "FrapTrap constructor copy called" << std::endl;
	this->m_name = copy.m_name;
}

FrapTrap&	FrapTrap::operator=(FrapTrap const& copy)
{
	if (this != &copy)
		this->m_name = copy.m_name;
	return (*this);
}

void	FrapTrap::getHighFivesGuys(void)
{
	highFivesGuys();
}

void	FrapTrap::highFivesGuys(void)
{
	std::cout << "Hey guys ! High fives !" << std::endl;
}

void	FrapTrap::display(void) const
{
	std::cout << "\e[39m\e[1m" << m_name << "\e[0m" << std::endl;
	std::cout << "Hit point : " << m_hitPoints << std::endl;
	std::cout << "Energy point : " << m_energyPoints << std::endl;
	std::cout << "Damage point : " << m_attackDamage << std::endl;
	std::cout << std::endl;
}

FrapTrap::~FrapTrap()
{
	std::cout << "FrapTrap destructor called" << std::endl;
}
