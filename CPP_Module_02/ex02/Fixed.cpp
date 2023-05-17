/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:15:36 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/17 19:08:52 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
}

static Fixed	max(Fixed a, Fixed b)
{
}

static Fixed	max(Fixed const& a, Fixed const& b)
{
}

static Fixed	min(Fixed a, Fixed b)
{
}

static Fixed	min(Fixed const& a, Fixed const& b)
{
}

Fixed& Fixed::operator+=(const Fixed& a)
{

}

// # ............ OVERLOAD ARITHMETIC OPERATOR .............. #
Fixed	operator+=(Fixed const& a, Fixed const& b)
{
}

Fixed	operator-=(Fixed const&a, Fixed const& b)
{
}

Fixed	operator*=(Fixed const&a, Fixed const& b)
{
}

Fixed	operator/=(Fixed const&a, Fixed const& b)
{
}

// # ............ OVERLOAD COMPARE OPERATOR .............. #
Fixed	operator==(Fixed const& a, Fixed const& b)
{
}

Fixed	operator!=(Fixed const& a, Fixed const& b)
{
}

Fixed	operator>(Fixed const& a, Fixed const& b)
{
}

Fixed	operator>=(Fixed const& a, Fixed const& b)
{
}

Fixed	operator<(Fixed const& a, Fixed const& b)
{
}

Fixed	operator<=(Fixed const& a, Fixed const& b)
{
}


Fixed::~Fixed()
{
	std::cout << "Deconstructor was called" << std::endl;
}
