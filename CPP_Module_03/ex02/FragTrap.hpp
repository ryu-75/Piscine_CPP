/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:59:06 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/24 18:15:34 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public :
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const& copy);
	void	getHighFivesGuys(void);
	void	attack(const std::string& target);
	void	display(void);
	~FragTrap();
private :
	void	highFivesGuys(void);
};

#endif //# ....................... FRAG_TRAP_HPP .................................#
