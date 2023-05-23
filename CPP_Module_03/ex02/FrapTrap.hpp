/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:21:37 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/23 14:12:49 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAP_TRAP_HPP
# define FRAP_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FrapTrap : public ClapTrap
{
public :
	FrapTrap();
	FrapTrap(std::string name);
	FrapTrap(FrapTrap const& copy);
	FrapTrap&	operator=(FrapTrap const& copy);
	void	getHighFivesGuys(void);
	void	display(void) const;
	~FrapTrap();
private :
	void	highFivesGuys(void);
};

#endif // #........................ FRAP_TRAP_HPP .......................... #
