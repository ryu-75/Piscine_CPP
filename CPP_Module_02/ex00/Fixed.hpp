/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:55:37 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/16 14:03:17 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
public:
	// Constructeur par defaut
	Fixed();
	// Constructeur de copie
	Fixed(Fixed const& nbFixedCopy);
	// Constructeur surcharge
	Fixed(int nbFixed);
	// Destructeur
	~Fixed();
	// Retourne la valur du nombre a virurgule sans la convertir
	int	getRawBits(void) const;
	// Init la valeur du nb a virgule fixe avec celle passee en para
	void	setRawBits(int const raw);
	Fixed&	operator=(Fixed const& nbFixedCopy);

private:
	int	m_nbFixed;
	// Partie fractionnaire, valeur toujours egal a 8
	static const int	m_nbBits;
};

#endif // #............... FIXED_HPP .................... #
