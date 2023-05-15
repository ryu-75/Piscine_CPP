/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:16:27 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/14 16:02:51 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <cctype>

class Harl
{
public:
	Harl();
	void	complain(std::string level);
	void	(*ptrDebug)(void);
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

typedef void	(Harl::*PtrHarl)(void);

#endif // # .................. HARL_HPP .................... //
