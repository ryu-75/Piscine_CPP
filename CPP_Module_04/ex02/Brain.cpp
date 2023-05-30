/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:46:37 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:22:26 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// [Default constructor]
Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

// [Constructor copy]
Brain::Brain(Brain const& copy)
{
	std::cout << "Brain constructor copy called";
	*this = copy;
}

// [Assignment operator]
Brain&	Brain::operator=(Brain const& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->m_ideas[i] = copy.m_ideas[i];
	}
	return (*this);
}

// [Methods]
std::string	Brain::getIdeas(int i) const
{
	return (this->m_ideas[i]);
}

void	Brain::setIdeas(std::string str, int i)
{
	this->m_ideas[i] = str;
}

// [Destructor]
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
