/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:44:43 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/20 15:21:51 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <ostream>

template <typename T>
class	Temp
{
	public:
		T	max(const T& a, const T& b);
		T	min(const T& a, const T& b);
		T	swap(const T& a, const T& b);
};

#endif // *************** WHATEVER_HPP ***************
