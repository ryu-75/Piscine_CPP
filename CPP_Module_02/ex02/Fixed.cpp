/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:15:36 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 18:26:09 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::m_nbBits = 8;

// Constructeur par defaut
Fixed::Fixed() : m_nbFixed(0)
{
	std::cout << "Default constructor" << std::endl;
}

// Constructeur surcharge
Fixed::Fixed(int const nb) : m_nbFixed(nb)
{
	std::cout << "Int constructor called" << std::endl;
	m_nbFixed = nb * ft_power(2, m_nbBits);
}

Fixed::Fixed(float const nb) : m_nbFixed(nb)
{
	std::cout << "Float constructor called" << std::endl;
	m_nbFixed = roundf(nb * ft_power(2, m_nbBits));
}

// Constructeur de copie
// Prend une reference constante de l objet du meme type
Fixed::Fixed(Fixed const& copy) : m_nbFixed(copy.m_nbFixed)
{
}

// Operateur d affectation
Fixed& Fixed::operator=(Fixed const &rhs)
{
	// On verifie que l objet n est pas le meme que celui passe en argument
	if (this != &rhs)
		m_nbFixed = rhs.m_nbFixed;
	return (*this); // On retourne l objet lui-meme
}

// static Fixed	max(Fixed &a, Fixed &b)
// {
// }

// static Fixed	max(Fixed const &a, Fixed const &b)
// {
// }

// static Fixed	min(Fixed &a, Fixed &b)
// {
// }

// static Fixed	min(Fixed const &a, Fixed const &b)
// {
// }

	// # ............ METHODS COMPARE OPERATOR ............... #
bool	Fixed::isEqual(Fixed const& b) const
{
	if (m_nbFixed == b.m_nbFixed)
		return (true);
	else
		return (false);
}

bool	Fixed::isDiff(Fixed const& b) const
{
	if (m_nbFixed != b.m_nbFixed)
		return (true);
	else
		return (false);
}

bool	Fixed::isInf(Fixed const& b) const
{
	if (m_nbFixed < b.m_nbFixed)
		return (true);
	else
		return (false);
}

bool	Fixed::isInfEqual(Fixed const& b) const
{
	if (m_nbFixed <= b.m_nbFixed)
		return (true);
	else
		return (false);
}

bool	Fixed::isSup(Fixed const& b) const
{
	if (m_nbFixed > b.m_nbFixed)
		return (true);
	else
		return (false);
}

bool	Fixed::isSupEqual(Fixed const& b) const
{
	if (m_nbFixed >= b.m_nbFixed)
		return (true);
	else
		return (false);
}

// # ............ FUNCTIONS COMPARISON OPERATOR .............. #
bool	operator==(Fixed const& a, Fixed const& b)
{
	return (a.isEqual(b));
}

bool	operator!=(Fixed const& a, Fixed const& b)
{
	return (a.isDiff(b));
}

bool	operator>(Fixed const& a, Fixed const& b)
{
	return (a.isSup(b));
}

bool	operator>=(Fixed const& a, Fixed const& b)
{
	return (a.isDiff(b));
}

bool	operator<(Fixed const& a, Fixed const& b)
{
	return (a.isInf(b));
}

bool	operator<=(Fixed const& a, Fixed const& b)
{
	return (a.isInfEqual(b));
}

	// # ............ METHODS ARITHMETIC OPERATOR ............ #
Fixed&	Fixed::operator+=(Fixed const& b)
{
	m_nbFixed += b.m_nbFixed;
	return (*this);
}

Fixed&	Fixed::operator-=(Fixed const& b)
{
	m_nbFixed -= b.m_nbFixed;
	return (*this);
}

Fixed&	Fixed::operator/=(Fixed const& b)
{
	m_nbFixed /= b.m_nbFixed;
	return (*this);
}

Fixed&	Fixed::operator*=(Fixed const& b)
{
	m_nbFixed *= b.m_nbFixed;
	return (*this);
}

// # ............ FUNCTIONS ARITHMETIC OPERATOR .............. #
Fixed	operator+(Fixed const& a, Fixed const& b)
{
	Fixed	copie(a);
	copie += b;
	return (copie);
}

Fixed	operator-(Fixed const& a, Fixed const& b)
{
	Fixed	copie(a);
	copie -= b;
	return (copie);
}

Fixed	operator*(Fixed const& a, Fixed const& b)
{
	Fixed	copie(a);
	copie *= b;
	return (copie);
}

Fixed	operator/(Fixed const& a, Fixed const& b)
{
	Fixed	copie(a);
	copie /= b;
	return (copie);
}

// Operateur d insertion
std::ostream&	operator<<(std::ostream &flux, Fixed const& nb)
{
	flux << nb.toFloat();
	return (flux);
}

// # ............ METHODS FUNCTIONS .............. #

float	Fixed::toFloat(void) const
{
	float	res;

	res = ((float)m_nbFixed) / ft_power(2, m_nbBits);
	return (res);
}

int		Fixed::toInt(void) const
{
	int	res;

	res = ((int)m_nbFixed) / ft_power(2, m_nbBits);
	return (res);
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor was called" << std::endl;
}
