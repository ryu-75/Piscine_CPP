/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:57:40 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/11 14:57:41 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	m_name;
public:
	Zombie();
	void	setZombieName(std::string name);
	void	announce();
	std::string	getZombieName();
	~Zombie();
};

//#...........PROTOTYPE........................#

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif //#............ ZOMBIE_HPP .............#
