/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:21:37 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 16:49:44 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAP_TRAP_HPP
# define FRAP_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public :
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const& copy);
	FragTrap&	operator=(FragTrap const& copy);
	void	getHighFivesGuys(void);
	void	display(void) const;
	~FragTrap();
private :
	void	highFivesGuys(void);
};

#endif // #........................ FRAP_TRAP_HPP .......................... #
