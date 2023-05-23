/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:21:20 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 17:05:21 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->m_name = "\e[31m\e[1mHarry\e[0m";
	this->m_hitPoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap overload constructor called" << std::endl;
	this->m_name = name;
}

FragTrap::FragTrap(FragTrap const& copy)
{
	std::cout << "FrapTrap constructor copy called" << std::endl;
	this->m_name = copy.m_name;
}

FragTrap&	FragTrap::operator=(FragTrap const& copy)
{
	if (this != &copy)
		this->m_name = copy.m_name;
	return (*this);
}

void	FragTrap::getHighFivesGuys(void)
{
	highFivesGuys();
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys ! High fives !" << std::endl;
}

void	FragTrap::display(void) const
{
	std::cout << "\e[39m\e[1m" << m_name << "\e[0m" << std::endl;
	std::cout << "Hit point : " << m_hitPoints << std::endl;
	std::cout << "Energy point : " << m_energyPoints << std::endl;
	std::cout << "Damage point : " << m_attackDamage << std::endl;
	std::cout << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
