/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:46:46 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/26 16:59:42 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public :
	Brain();
	Brain(std::string ideas);
	Brain(Brain const& copy);
	Brain&	operator=(Brain const& copy);
	~Brain();
protected :
	std::string	m_ideas[100];
};

#endif // #.......................... BRAIN_HPP ..............................#
