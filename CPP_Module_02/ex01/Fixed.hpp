/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:55:37 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/16 17:53:32 by nlorion          ###   ########.fr       */
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
	// Fixed(const int nbInt);
	// Destructeur
	~Fixed();
	// Methodes
	// Retourne la valeur du nombre a virurgule sans la convertir
	int	getRawBits(void) const;
	// Init la valeur du nb a virgule fixe avec celle passee en para
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;
	void	displayValue(std::ostream &flux) const;
	Fixed&	operator=(Fixed const& nbFixedCopy);

private:
	int	m_nbFixed;
	// Partie fractionnaire, valeur toujours egal a 8
	static const int	m_nbBits;
};

std::ostream&	operator<<(std::ostream &flux, Fixed const& fixed);

#endif // #............... FIXED_HPP .................... #
