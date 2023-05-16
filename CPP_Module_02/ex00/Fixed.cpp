/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:55:35 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/16 14:07:00 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Declaration de notre variable statique
const int Fixed::m_nbBits = 8;

// Constructeur par defaut
Fixed::Fixed() : m_nbFixed(0)
{
	std::cout << "Default contructor called" << std::endl;
}

// Constructeur de copie
Fixed::Fixed(Fixed const& nbFixedCopy) : m_nbFixed(nbFixedCopy.m_nbFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	m_nbFixed = nbFixedCopy.getRawBits();
}

// Constructeur surcharge
Fixed::Fixed(int nbFixed) : m_nbFixed(nbFixed)
{
}

Fixed&	Fixed::operator=(Fixed const& nbFixedCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	m_nbFixed = nbFixedCopy.m_nbFixed;
	return (*this); // Retourne l objet pointe
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
