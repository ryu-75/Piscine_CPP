/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:59:04 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 18:20:18 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int const nb);
	Fixed(float const nb);
	Fixed(Fixed const& copy);
	// # ............ METHODS ................................ #
	Fixed& operator=(Fixed const& rhs);
	static Fixed	max(Fixed const &a, Fixed const &b);
	static Fixed	max(Fixed &a, Fixed &b);
	static Fixed	min(Fixed const &a, Fixed const &b);
	static Fixed	min(Fixed &a, Fixed &b);
	float	toFloat(void) const;
	int		toInt(void) const;

	// # ............ METHODS COMPARE OPERATOR ............... #
	bool	isEqual(Fixed const& b) const;
	bool	isDiff(Fixed const& b) const;
	bool	isInf(Fixed const& b) const;
	bool	isInfEqual(Fixed const& b) const;
	bool	isSup(Fixed const& b) const;
	bool	isSupEqual(Fixed const& b) const;

	// # ............ METHODS ARITHMETIC OPERATOR ............ #
	Fixed&	operator+=(Fixed const& b);
	Fixed&	operator-=(Fixed const& b);
	Fixed&	operator/=(Fixed const& b);
	Fixed&	operator*=(Fixed const& b);
	~Fixed();
private:
	int	m_nbFixed;
	static const int m_nbBits;
};

// # ............ FUNCTIONS ARITHMETIC OPERATOR .............. #
Fixed	operator+(Fixed const& a, Fixed const& b);
Fixed	operator-(Fixed const& a, Fixed const& b);
Fixed	operator*(Fixed const& a, Fixed const& b);
Fixed	operator/(Fixed const& a, Fixed const& b);

// # ............ FUNCTIONS COMPARISON OPERATOR .............. #
bool	operator==(Fixed const& a, Fixed const& b);
bool	operator!=(Fixed const& a, Fixed const& b);
bool	operator>(Fixed const& a, Fixed const& b);
bool	operator>=(Fixed const& a, Fixed const& b);
bool	operator<(Fixed const& a, Fixed const& b);
bool	operator<=(Fixed const& a, Fixed const& b);

std::ostream&	operator<<(std::ostream &flux, Fixed const& nb);
int	ft_power(int nb, int exposant);

#endif // #............. FIXED_HPP .......................... #
