/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:59:01 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:28:12 by nlorion          ###   ########.fr       */
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
	// Default Constructor
	WrongCat();
	// Overload constructor
	WrongCat(std::string type);
	// Constructor copy
	WrongCat(WrongCat const& copy);
	// Assignment operator
	WrongCat&	operator=(WrongCat const& copy);
	// Destructor
	~WrongCat();

protected :
	std::string	m_type;
};

#endif // #.............................. WRONG_CAT_HPP .....................................#
