/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:59:06 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 13:39:40 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

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
	void	attack(const std::string& target);
	void	display(void);
	~FragTrap();
private :
	void	highFivesGuys(void);
};

#endif //# ....................... FRAG_TRAP_HPP .................................#
