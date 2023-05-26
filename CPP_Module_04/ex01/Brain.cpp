/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:46:37 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/26 17:05:42 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const& copy)
{
	std::cout << "Brain constructor copy called";
	*this = copy;
}

Brain&	Brain::operator=(Brain const& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->m_ideas[i] = copy.m_ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
