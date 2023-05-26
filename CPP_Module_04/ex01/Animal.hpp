/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:50 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/26 15:17:27 by nlorion          ###   ########.fr       */
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
	Animal();
	Animal(std::string type);
	Animal(Animal const& copy);
	Animal&	operator=(Animal const& copy);
	void	setType(std::string type);
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
	virtual ~Animal();
protected:
	std::string	m_type;
};

std::ostream&	operator<<(std::ostream &flux, Animal const& obj);

#endif // #.............................. ANIMAL_HPP ..........................#
