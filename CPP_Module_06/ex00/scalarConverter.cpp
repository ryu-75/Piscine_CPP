/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:50:20 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/19 16:02:30 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"

void	toChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast< int >(c) << std::endl;
	std::cout << "float: " << static_cast< float >(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast< double >(c) << ".0" << std::endl;
}

void	toInt(int num)
{
	displayChar(num);
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << static_cast< float >(num) << ".0f" << std::endl;
	std::cout << "double: " << static_cast< double >(num) << ".0" << std::endl;
}

void	toFloat(float num)
{
	int	val = static_cast< int >(num);
	float	result = val - num;
	displayChar(static_cast< double >(num));
	if (num > INT_MAX || num < INT_MIN)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast< int >(num) << std::endl;
	std::cout << "float: " << num;
	if (result == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast< double >(num);
	if (result == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	toDouble(double num)
{
	int	val = static_cast< int >(num);
	double	result = val - num;
	displayChar(static_cast< char >(num));
	if (num > INT_MAX || num < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast< int >(num) << std::endl;
	std::cout << "float: " << static_cast< float >(num);
	if (result == 0)
		std::cout << ".0" << std::endl;
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast< double >(num);
	if (result == 0)
		std::cout << ".0" << std::endl;
	std::cout << std::endl;
}

void	convert(char *argv)
{
	if (isInt(argv))
		toInt(atoi(argv));
	else if (isChar(argv))
		toChar(argv[0]);
	else if (isFloat(argv))
		toFloat(atof(argv));
	else if (isDouble(argv))
		toDouble(atof(argv));
	else
		std::cout << "<ScalarConverter> : \e[1m\e[35mERROR\e[0m" << std::endl;
}
