/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:59:01 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 15:09:21 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	// Default constructor
	WrongCat();
	// Overload constructor
	WrongCat(std::string type);
	// Constructor copy
	WrongCat(WrongCat const& copy);
	// Assignment operator
	WrongCat&	operator=(WrongCat const& copy);
	// Destructor
	~WrongCat();
	// Methods
	void	makeSound(void) const;
	void	setType(std::string type);
	std::string	getType(void) const;
};

#endif // #.............................. WRONG_CAT_HPP .....................................#
