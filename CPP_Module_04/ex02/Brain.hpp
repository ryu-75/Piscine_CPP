/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:46:46 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:19:24 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public :
	// Default constructor
	Brain();
	// Overload constructor
	Brain(std::string ideas);
	// Constructor copy
	Brain(Brain const& copy);
	// Assignment operator
	Brain&	operator=(Brain const& copy);
	// Destructor
	~Brain();
	// Methods
	void	setIdeas(std::string str, int i);
	std::string	getIdeas(int i) const;

protected :
	std::string	m_ideas[100];
};

#endif // #.......................... BRAIN_HPP ..............................#
