/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:55:13 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/16 14:06:57 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;		// Parametre par defaut (0)
	Fixed	b(a);	// b prend les parametres par defaut de "a"
	Fixed	c;		// Parametre par defaut (0)

	c = b;			// c prend la valeur de b;
	std::cout << std::endl;
	std::cout << "# \e[1m\e[31mTEST 1\e[0m #" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	c.setRawBits(0);
	b = c;

	std::cout << std::endl;
	std::cout << "# \e[1m\e[31mTEST 2\e[0m #" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	a = b;
	b.setRawBits(10);
	c = b;

	std::cout << std::endl;
	std::cout << "# \e[1m\e[31mTEST 3\e[0m #" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}
