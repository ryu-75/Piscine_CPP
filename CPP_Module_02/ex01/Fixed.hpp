/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:55:37 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 15:07:26 by nlorion          ###   ########.fr       */
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
	// Constructeur par defaut
	Fixed();
	// Constructeur de copie
	Fixed(Fixed const& nbFixedCopy);
	// Constructeur surcharge
	Fixed(const int nbFixed);
	Fixed(const float nbFloat);
	// Destructeur
	~Fixed();
	// Methodes
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	void	displayValue(std::ostream &flux) const;
	Fixed&	operator=(Fixed const& nbFixedCopy);
private:
	int	m_nbFixed;
	static const int	m_nbBits;
};


// #.............. FUNCTIONS ............................ #
// Operateur d insertion
std::ostream&	operator<<(std::ostream &flux, Fixed const& fixed);
int	ft_pow(int value, int exposant);

#endif // #............... FIXED_HPP .................... #
