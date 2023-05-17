/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:59:04 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/17 18:49:50 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
public:
	Fixed();
	// # ............ METHODS ................................ #
	static Fixed	max(Fixed const& a, Fixed const& b);
	static Fixed	max(Fixed a, Fixed b);
	static Fixed	min(Fixed const& a, Fixed const& b);
	static Fixed	min(Fixed a, Fixed b);
	// # ............ METHODS COMPARE OPERATOR ............... #
	bool	operator==(Fixed const& a);
	bool	operator!=(Fixed const& a);
	bool	operator<(Fixed const& a);
	bool	operator<=(Fixed const& a);
	bool	operator>(Fixed const& a);
	bool	operator>=(Fixed const& a);
	// # ............ METHODS ARITHMETIC OPERATOR ............ #
	void	operator+=(const Fixed& a);
	void	operator-=(Fixed const&a);
	void	operator/=(Fixed const& a);
	void	operator*=(Fixed const& a);
	~Fixed();
private:
	int	m_a;
	int	m_b;
	static int m_nbBits;
};

// # ............ OVERLOAD ARITHMETIC OPERATOR .............. #
Fixed	operator+(Fixed const& a, Fixed const& b);
Fixed	operator-(Fixed const&a, Fixed const& b);
Fixed	operator*(Fixed const&a, Fixed const& b);
Fixed	operator/(Fixed const&a, Fixed const& b);

// # ............ OVERLOAD COMPARE OPERATOR ................. #
Fixed	operator==(Fixed const& a, Fixed const& b);
Fixed	operator!=(Fixed const& a, Fixed const& b);
Fixed	operator>(Fixed const& a, Fixed const& b);
Fixed	operator>=(Fixed const& a, Fixed const& b);
Fixed	operator<(Fixed const& a, Fixed const& b);
Fixed	operator<=(Fixed const& a, Fixed const& b);

#endif // #............. FIXED_HPP .......................... #
