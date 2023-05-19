/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:15:36 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/19 16:09:24 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::m_nbBits = 8;

// # ............ DEFAULT CONSTRUCTOR ............ #
Fixed::Fixed() : m_nbFixed(0)
{
}

// # ............ CONSTRUCTOR OVERLOADING ............ #
Fixed::Fixed(int const nbInt) : m_nbFixed(nbInt)
{
	std::cout << "Int constructor called" << std::endl;
	m_nbFixed = nbInt * ft_power(2, m_nbBits);
}

Fixed::Fixed(float const nbFloat) : m_nbFixed(nbFloat)
{
	std::cout << "Float constructor called" << std::endl;
	m_nbFixed = roundf((nbFloat * ft_power(2, m_nbBits)));
}

// # ............ COPY CONSTRUCTOR ............ #
// Prend une reference constante de l objet du meme type
Fixed::Fixed(Fixed const& copy) : m_nbFixed(copy.m_nbFixed)
{
	std::cout << "Constructor copy called" << std::endl;
	m_nbFixed = copy.getRawBits();
}

// # ............ ASSIGNMENT OPERATOR ............ #
Fixed	&Fixed::operator=(Fixed const &b)
{
	// On verifie que l objet n est pas le meme que celui passe en argument
	if (this != &b)
		m_nbFixed = b.m_nbFixed;
	return (*this); // On retourne l objet lui-meme
}

// # ............ MEMBER FUNCTIONS OVERLOADING ............ #
Fixed 	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.m_nbFixed > b.m_nbFixed)
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.m_nbFixed < b.m_nbFixed)
		return (a);
	return (b);
}

// # ............ MEMBER FUNCTIONS COMPARISON OPERATOR .............. #
bool	Fixed::operator==(Fixed const& b)
{
	return (this->m_nbFixed == b.m_nbFixed);
}

bool	Fixed::operator!=(Fixed const& b)
{
	return (this->m_nbFixed != b.m_nbFixed);
}

bool	Fixed::operator>(Fixed const& b)
{
	return (this->m_nbFixed > b.m_nbFixed);
}

bool	Fixed::operator>=(Fixed const& b)
{
	return (this->m_nbFixed < b.m_nbFixed);
}

bool	Fixed::operator<(Fixed const& b)
{
	return (this->m_nbFixed < b.m_nbFixed);
}

bool	Fixed::operator<=(Fixed const& b)
{
	return (this->m_nbFixed <= b.m_nbFixed);
}

// # ............ MEMBER FUNCTIONS ARITHMETIC OPERATOR ............ #
Fixed	Fixed::operator+(Fixed const& b)
{
	Fixed	tmp;
	tmp.m_nbFixed = m_nbFixed + b.m_nbFixed;
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const& b)
{
	Fixed	tmp;
	tmp.m_nbFixed = m_nbFixed - b.m_nbFixed;
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const& b)
{
	Fixed	tmp;
	tmp.m_nbFixed = ((float)m_nbFixed * b.m_nbFixed / ft_power(2, m_nbBits));
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const& b)
{
	Fixed	tmp;
	tmp.m_nbFixed = ((float)m_nbFixed / b.m_nbFixed * ft_power(2, m_nbBits));
	return (tmp);
}

// # ............ MEMBER FUNCTIONS POST-INCREMENT OPERATOR ............ #
Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	tmp.m_nbFixed = m_nbFixed;
	m_nbFixed++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp.m_nbFixed = m_nbFixed;
	m_nbFixed--;
	return (tmp);
}

// # ............ MEMBER FUNCTIONS PRE-INCREMENT OPERATOR ............ #
Fixed	Fixed::operator++(void)
{
	++m_nbFixed;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	--m_nbFixed;
	return (*this);
}

// # ............ MEMBER FUNCTIONS INSERT OPERATOR ............ #
std::ostream&	operator<<(std::ostream &flux, Fixed const& nb)
{
	flux << nb.toFloat();
	return (flux);
}

// # ............ MEMBER FUNCTIONS .............. #
float	Fixed::toFloat(void) const
{
	return ((float)m_nbFixed) / ft_power(2, m_nbBits);
}

int		Fixed::toInt(void) const
{
	return ((int)m_nbFixed) / ft_power(2, m_nbBits);
}

void	Fixed::setRawBits(const int raw)
{
	m_nbFixed = raw;
}

int	Fixed::getRawBits(void) const
{
	return (m_nbFixed);
}

// # ............ DECONSTRUCTOR ............ #
Fixed::~Fixed()
{
	std::cout << "Deconstructor was called" << std::endl;
}
