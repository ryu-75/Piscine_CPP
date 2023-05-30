/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:54:05 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:01:14 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public :
	// Constructor
	Dog();
	// Constructor copy
	Dog(Dog const& copy);
	// Assignment operator
	Dog&	operator=(Dog const& copy);
	// Destructor
	~Dog();
	// Methods
	std::string	getType(void) const;
	void	setIdeas(std::string str, int i);
	void	getIdeas(int i) const;
	void	makeSound(void) const;

protected :
	std::string	m_type;

private :
	Brain	*m_brain;
};

#endif // #.......................... DOG_HPP ..............................#
