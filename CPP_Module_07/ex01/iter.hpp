/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:15:50 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/21 10:35:57 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <iomanip>
#include <string>

template<typename A, typename B, typename C>

void	iter(A* tab, B size, C ft)
{
	for (int i = 0; i < size; i++)
	{
		ft(tab[i]);
	}
}

#endif // ******************* ITER_HPP *******************
