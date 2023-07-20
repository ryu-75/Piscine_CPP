/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:56:34 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/20 12:00:25 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include <cstdlib>
#include <ctime>

class	Base
{
	public:
		virtual ~Base();
};

Base *	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif // *********************** BASE_HPP ***********************
