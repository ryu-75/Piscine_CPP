/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:24:03 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 18:21:19 by nlorion          ###   ########.fr       */
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
	Fixed	b(5);

	// std::cout << "a + b : " << (a + b) << std::endl;
	// std::cout << "a - b : " << (a - b) << std::endl;
	// std::cout << "a / b : " << (a / b) << std::endl;
	std::cout << "a * b : " << (a * b) << std::endl;


	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;

	std::cout << "b : " << b << std::endl;
	return (0);
}
