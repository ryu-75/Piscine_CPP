/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:50 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 15:58:23 by nlorion          ###   ########.fr       */
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
	std::string	setType(std::string type);
	void	getType(void);
	virtual void	makeSound(void) const;
	virtual void	display(void) const;
	~Animal();
protected:
	std::string	m_type;
};

#endif // #.............................. ANIMAL_HPP ..........................#
