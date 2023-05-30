/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:45:38 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:30:22 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// [Default constructor]
Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->m_type = BOLD BLUE "Cat" R;
	this->m_brain = new Brain();
}

// [Constructor copy]
Cat::Cat(Cat const& copy) : Animal(copy)
{
	std::cout << "Cat constructor copy called" << std::endl;
	this->m_type = copy.m_type + BOLD BLUE "_copy" R;
	this->m_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->m_brain->setIdeas(copy.m_brain->getIdeas(i), i);
}

// [Assignment operator]
Cat&	Cat::operator=(Cat const& copy)
{
	if (this != &copy)
	{
		this->m_type = copy.m_type + BOLD BLUE "_copy" R;
		this->m_brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->m_brain->setIdeas(copy.m_brain->getIdeas(i), i);
	}
	return (*this);
}

// [Methods]
std::string	Cat::getType(void) const
{
	return (this->m_type);
}

void	Cat::getIdeas(int i) const
{
	std::cout << this->m_brain->getIdeas(i) << std::endl;
}

void	Cat::setIdeas(std::string str, int i)
{
	if (i >= 0 && i <= 100)
		this->m_brain->setIdeas(str, i);
}

void	Cat::makeSound(void) const
{
	std::cout << this->m_type << " said : Miaouh ! *grumpy cat*" << std::endl;
}

// [Destructor]
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete m_brain;
}
