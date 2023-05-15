/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:16:27 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/15 13:16:36 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
public:
	Harl();
	void	complain(std::string level);
	void	switchSelection(size_t i);
	void	(*ptrDebug)(void);

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif // # .................. HARL_HPP .................... //
