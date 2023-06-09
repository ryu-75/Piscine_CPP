/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:45:42 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:57:46 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
public :
	// Default constructor
	Cat();
	// Overload constructor
	Cat(std::string type);
	// Constructor copy
	Cat(Cat const& copy);
	// Assignment operator
	Cat&	operator=(Cat const& copy);
	// Methods
	void	makeSound(void) const;
	// Destructor
	~Cat();
};

#endif // #.......................... CAT_HPP ..............................#
