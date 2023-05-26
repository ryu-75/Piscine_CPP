/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:00:23 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/26 14:13:55 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

#define WHITE "\e[39m"
#define R "\e[0m"
#define BOLD "\e[1m"
#define GREEN "\e[32m"
#define BLUE "\e[36m"
#define RED "\e[31m"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const& copy);
	WrongAnimal&	operator=(WrongAnimal const& copy);
	void	makeSound(void) const;
	void	setType(std::string type);
	std::string	getType(void) const;
	~WrongAnimal();
protected:
	std::string	m_type;
};

#endif // #.............................. WRONG_ANIMAL_HPP .....................................#
