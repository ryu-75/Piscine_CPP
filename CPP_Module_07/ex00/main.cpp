/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:44:41 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/07 11:45:34 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <typename T>
T	Temp<T>::max(const T& a, const T& b)
{
	return ((a > b) ? a : b);
}

template <typename T>
T	Temp<T>::min(const T& a, const T& b)
{
	return ((a < b) ? a : b);

}

template <typename T>
T	Temp<T>::swap(const T& a, const T& b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

int	main(void)
{
	std::cout << "\e[33m\e[1m#1st MAIN\e[0m" << std::endl;
	{
		int	a = 5;
		int	b = 10;

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "***********************" << std::endl;
		
		std::cout << "max( a, b ) = " << std::max<int>(a, b) << std::endl;
		std::cout << "min( a, b ) = " << std::min<int>(a, b) << std::endl;
		std::cout << "***********************" << std::endl;

		std::cout << "SWAP : " << std::endl;
		std::swap(a, b);
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
	}
		std::cout << std::endl;
		std::cout << "\e[33m\e[1m#2nd MAIN\e[0m" << std::endl;
	{
		double pi = 3.14;
		double e = 2.71;

		std::cout << "pi = " << pi << std::endl;
		std::cout << "e = " << e << std::endl;
		std::cout << "***********************" << std::endl;

		std::cout << "DOUBLE :" << std::endl;
		std::cout << "max( a, b ) = " << std::max(pi, e) << std::endl;
		std::cout << "min( a, b ) = " << std::min(pi, e) << std::endl;
		std::cout << "***********************" << std::endl;

		std::cout << "INT :" << std::endl;
		std::cout << "max( a, b ) = " << std::max<int>(pi, e) << std::endl;
		std::cout << "min( a, b ) = " << std::min<int>(pi, e) << std::endl;
		std::cout << "***********************" << std::endl;

		std::cout << "SWAP : " << std::endl;
		std::swap(pi, e);
		std::cout << "pi = " << pi << std::endl;
		std::cout << "e = " << e << std::endl;
	}
		std::cout << std::endl;
		std::cout << "\e[33m\e[1m#3d MAIN\e[0m" << std::endl;
	{
		char a = 'a';
		char b = 'b';

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;

		std::cout << "***********************" << std::endl;
		std::cout << "CHAR :" << std::endl;
		std::cout << "max( a, b ) = " << std::max(a, b) << std::endl;
		std::cout << "min( a, b ) = " << std::min(a, b) << std::endl;
		std::cout << "***********************" << std::endl;

		std::cout << "INT :" << std::endl;
		std::cout << "max( a, b ) = " << std::max<int>(a, b) << std::endl;
		std::cout << "min( a, b ) = " << std::min<int>(a, b) << std::endl;
		std::cout << "***********************" << std::endl;

		std::cout << "SWAP : " << std::endl;
		std::swap(a, b);
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
	}
	return (0);
}
