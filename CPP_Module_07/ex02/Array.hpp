/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:46:17 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/21 13:09:08 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template<typename T>
class	Array
{
	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array<T> &copy);
		~Array<T>();
		T &	operator[](const int &idx);
		int const	& size(void) const;
		Array<T>&	operator=(const Array<T> &rhs);
		class	indexException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("🔺  Exception: Invalid index");
			}
		};
	private:
		T	*m_array;
		int	m_size;
};

#endif // ******************* ARRAY_HPP *******************
