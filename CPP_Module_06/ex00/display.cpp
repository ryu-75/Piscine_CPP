/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:24:56 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/19 16:05:16 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"

void	displayChar(int c)
{
	std::cout << "char: ";
	if (c <= 32 || c == 127)
		std::cout << "Non displayable" << std::endl;
	else if (c < 0 || c > 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "'" << static_cast< char >(c) << "'" << std::endl;
}

void	displayInf(std::string s)
{
	if (s[0] == '+')
		s = s.substr(1, s.size() - 1);
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (s.find('f') == s.rfind('f'))
		s.append("f");
	std::cout << "float: " << s << std::endl;
	if (s.find('f') != s.rfind('f'))
		s.erase(s.size() - 1);
	std::cout << "double: " << s << std::endl;
	exit (0);
}

void	displayNan(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	exit (1);
}

void	infOrNan(std::string s)
{
	if (!s.compare("+inf") || !s.compare("-inf") || !s.compare("inf") ||\
		!s.compare("+inff") || !s.compare("-inff") || !s.compare("inff"))
		displayInf(s);
	else if (!s.compare("nan") || !s.compare("nanf"))
		displayNan();
}
