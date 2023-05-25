/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:54:05 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 15:58:17 by nlorion          ###   ########.fr       */
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
	Dog();
	Dog(std::string type);
	Dog(Dog const& copy);
	Dog&	operator=(Dog const& copy);
	void	makeSound(void) const;
	void	display(void) const;
	~Dog();
};

#endif // #.......................... DOG_HPP ..............................#
