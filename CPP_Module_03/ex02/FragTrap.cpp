/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:58:54 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/24 18:19:30 by nlorion          ###   ########.fr       */
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
	*this = copy;
	std::cout << "FragTrap copy constructor called";
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
