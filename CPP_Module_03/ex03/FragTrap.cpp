/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:58:54 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 13:39:43 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	m_name = "Peppy";
	m_hit = 100;
	m_energy = 100;
	m_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap overload constructor called" << std::endl;
	m_name = name;
	m_hit = 100;
	m_energy = 100;
	m_damage = 30;
}

FragTrap::FragTrap(FragTrap const& copy) : ClapTrap(copy)
{
	m_name = copy.m_name;
	m_hit = copy.m_hit;
	m_energy = copy.m_energy;
	m_damage = copy.m_damage;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& copy)
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

void	FragTrap::getHighFivesGuys(void)
{
	highFivesGuys();
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys, high fives everybody !" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (m_hit == 0)
		std::cout << "You can't attack your fow, you're dead dude !" << std::endl;
	else if (m_energy == 0)
		std::cout << "You don't have enough energy to attack" << std::endl;
	std::cout << "FragTrap " << BOLD << m_name << R << " attacks " << target << ", causing " << m_damage << " points of damage!" << std::endl;
	m_energy--;
	if (m_energy < 0)
		m_energy = 0;
}

void	FragTrap::display(void)
{
	std::cout << std::endl;
	std::cout << BOLD << m_name << R << std::endl;
	std::cout << "Hit points : " << m_hit << std::endl;
	std::cout << "Energy points : " << m_energy << std::endl;
	std::cout << "Damage points : " << m_damage << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}
