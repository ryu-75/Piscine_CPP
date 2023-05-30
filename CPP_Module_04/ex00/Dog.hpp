/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:54:05 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:58:07 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
public :
	// Default constructor
	Dog();
	// Overload constructor
	Dog(std::string type);
	// Constructor copy
	Dog(Dog const& copy);
	// Assignment operator
	Dog&	operator=(Dog const& copy);
	// Methods
	void	makeSound(void) const;
	// Destructor
	~Dog();
};

#endif // #.......................... DOG_HPP ..............................#
