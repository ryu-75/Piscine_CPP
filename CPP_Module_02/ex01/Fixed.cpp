/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:55:35 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/17 16:53:50 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	m_nbFixed = nbInt * ft_pow(2, m_nbBits);
}

Fixed::Fixed(const float nbFloat) : m_nbFixed(nbFloat)
{
	std::cout << "Float constructor called" << std::endl;
	m_nbFixed = roundf((nbFloat * ft_pow(2, m_nbBits)));
}

// #.......... DECONSTRUCTEUR .................... #
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// #.......... METHODE .................... #
float	Fixed::toFloat(void) const
{
	return (((float)m_nbFixed) / ft_pow(2, m_nbBits));
}

int	Fixed::toInt(void) const
{
	return (((int)m_nbFixed) / ft_pow(2, m_nbBits));
}

void	Fixed::setRawBits(int const raw)
{
	m_nbFixed = raw;
}

int	Fixed::getRawBits(void) const
{
	return (m_nbFixed);
}

// Surcharge d operateur
Fixed&	Fixed::operator=(Fixed const& nbFixedCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (m_nbFixed != nbFixedCopy.m_nbFixed)
		m_nbFixed = nbFixedCopy.m_nbFixed;
	return (*this);
}

// Operateur d insertion
std::ostream&	operator<<(std::ostream &flux, Fixed const& fixed)
{
	flux << fixed.toFloat();
	return (flux);
}

