/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:53:28 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:21:50 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// [Default constructor]
Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->m_type = BOLD GREEN "Dog" R;
	this->m_brain = new Brain();
}

// [Constructor copy]
Dog::Dog(Dog const& copy) : Animal(copy)
{
	std::cout << "Dog constructor copy called" << std::endl;
	this->m_type = copy.m_type + BOLD GREEN "_copy" R;
	this->m_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->m_brain->setIdeas(copy.m_brain->getIdeas(i), i);
}

// [Assignment operator]
Dog&	Dog::operator=(Dog const& copy)
{
	if (this != &copy)
	{
		this->m_type = copy.m_type + BOLD GREEN "_copy" R;
		this->m_brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->m_brain->setIdeas(copy.m_brain->getIdeas(i), i);
	}
	return (*this);
}

// [Methods]
std::string	Dog::getType(void) const
{
	return (this->m_type);
}

void	Dog::getIdeas(int i) const
{
	std::cout << this->m_brain->getIdeas(i) << std::endl;
}

void	Dog::setIdeas(std::string str, int i)
{
	if (i >= 0 && i <= 100)
		this->m_brain->setIdeas(str, i);
}

void	Dog::makeSound(void) const
{
	std::cout << this->m_type << " said : Wouaf wouaf ! *sweet dog*" << std::endl;
}

// [Destructor]
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete m_brain;
}
