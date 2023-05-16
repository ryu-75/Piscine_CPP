/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:55:35 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/16 18:19:33 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Declaration de notre variable statique
const int Fixed::m_nbBits = 8;

// #.......... CONSTRUCTEUR PAR DEFAUT .................... #
Fixed::Fixed() : m_nbFixed(0)
{
	std::cout << "Default contructor called" << std::endl;
}

// #.......... CONSTRUCTEUR DE COPIE .................... #
Fixed::Fixed(Fixed const& nbFixedCopy) : m_nbFixed(nbFixedCopy.m_nbFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	m_nbFixed = nbFixedCopy.getRawBits();
}

// #.......... CONSTRUCTEUR SURCHARGE .................... #

Fixed::Fixed(const int nbInt) : m_nbFixed(nbInt)
{
	std::cout << "Int constructor called" << std::endl;
	m_nbFixed = toInt();
}

Fixed::Fixed(const float nbFloat)
{
	m_nbFixed = nbFloat;
	std::cout << "Float constructor called" << std::endl;
	m_nbFixed = toFloat();
}

// #.......... METHODE .................... #
Fixed&	Fixed::operator=(Fixed const& nbFixedCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	m_nbFixed = nbFixedCopy.m_nbFixed;
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(m_nbFixed);
}

int	Fixed::toInt(void) const
{
	return (static_cast<int>(m_nbFixed));
}

void	Fixed::setRawBits(int const raw)
{
	m_nbFixed = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_nbFixed);
}

std::ostream&	operator<<(std::ostream &flux, Fixed const& fixed)
{
	fixed.displayValue(flux);
	return (flux);
}

void	Fixed::displayValue(std::ostream &flux) const
{
	flux << m_nbFixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
