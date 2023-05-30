/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:45:42 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:59:43 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public :
	// Default constructor
	Cat();
	// Constructor copy
	Cat(Cat const& copy);
	// Assignment operator
	Cat&	operator=(Cat const& copy);
	// Destructor
	~Cat();
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

#endif // #.......................... CAT_HPP ..............................#
