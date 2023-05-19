/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:59:04 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/19 16:08:52 by nlorion          ###   ########.fr       */
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
	Fixed(int const nbInt);
	Fixed(float const nbFloat);
	Fixed(Fixed const& copy);

	// # ............ METHODS ................................ #
	Fixed& operator=(Fixed const& rhs);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed	&min(Fixed &a, Fixed &b);
	float	toFloat(void) const;
	int		toInt(void) const;
	int	getRawBits(void) const;
	void	setRawBits(const int raw);

	// # ............ MEMBER FUNCTIONS ARITHMETIC OPERATOR ............ #
	Fixed	operator+(Fixed const& b);
	Fixed	operator-(Fixed const& b);
	Fixed	operator*(Fixed const& b);
	Fixed	operator/(Fixed const& b);

	// # ............ MEMBER FUNCTIONS COMPARE OPERATOR ............ #
	Fixed	operator++(int);
	Fixed	operator++(void);
	Fixed	operator--(int);
	Fixed	operator--(void);

	// # ............ MEMBER FUNCTIONS COMPARE OPERATOR ............... #
	bool	operator==(Fixed const& b);
	bool	operator!=(Fixed const& b);
	bool	operator>(Fixed const& b);
	bool	operator>=(Fixed const& b);
	bool	operator<(Fixed const& b);
	bool	operator<=(Fixed const& b);
	~Fixed();
	
private:
	int	m_nbFixed;
	static const int m_nbBits;
};

// # ............ NO MEMBER FUNCTIONS .............. #
std::ostream&	operator<<(std::ostream &flux, Fixed const& nb);
int	ft_power(int nb, int exposant);

#endif // #............. FIXED_HPP .......................... #
