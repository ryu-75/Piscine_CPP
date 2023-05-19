/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:24:03 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/19 16:05:55 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	ft_power(int nb, int exposant)
{
	int	res;
	int	i;

	i = 0;
	res = 1;
	if (nb == 0|| exposant == 0)
		return (0);
	for ( ; i < exposant; i++)
		res = res * nb;
	return (res);
}

int	main(void)
{
	Fixed	a(5);
	Fixed const	b(5);

	// ARITHMETIC
	std::cout << "a + b : " << (a + b) << std::endl;
	std::cout << "a - b : " << (a - b) << std::endl;
	std::cout << "a / b : " << (a / b) << std::endl;
	std::cout << "a * b : " << (a * b) << std::endl;

	// COMPARISON
	std::cout << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;

	// PRE INC
	std::cout << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;

	std::cout << "a : "<< a << std::endl;

	// POST INC
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a : " << a << std::endl;

	// RETURN MIN OR MAX VALUE
	std::cout << std::endl;
	std::cout << "min  : " << Fixed::min(a, b) << std::endl;
	std::cout << "min  : " << Fixed::min(a, b) << std::endl;
	std::cout << "max  : " << Fixed::max(a, b) << std::endl;
	std::cout << "max  : " << Fixed::max(a, b) << std::endl;

	// COMPARISON AFTER POST AND PRE INC
	std::cout << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;

	return (0);
}
