/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:50 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:56:26 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

#define WHITE "\e[39m"
#define R "\e[0m"
#define BOLD "\e[1m"
#define GREEN "\e[32m"
#define BLUE "\e[36m"
#define RED "\e[31m"

class Animal
{
public:
	// Destructor
	virtual ~Animal();
	// Methods
	void	setType(std::string type);
	std::string	getType(void) const;
	virtual void	makeSound(void) const = 0;

protected:
	// Default constructor
	Animal();
	// Constructor copy
	Animal(Animal const& copy);
	// Assignment operator
	Animal&	operator=(Animal const& copy);
	// Overload constructor
	Animal(std::string type);
	std::string	m_type;
};

#endif // #.............................. ANIMAL_HPP ..........................#
