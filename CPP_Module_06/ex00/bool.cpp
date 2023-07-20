/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:20:35 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/19 16:02:46 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"

bool	isChar(std::string av)
{
	if (av.size() > 1)
		return (false);
	return (true);
}

bool	isInt(char *av)
{
	if (atol(av) > INT_MAX || atol(av) < INT_MIN)
		return (false);
	for (int i = 0; av[i]; i++)
	{
		if (i == 0 && av[i] == '-')
			i++;
		if (!isdigit(av[i]))
			return (false);
	}
	return (true);
}

bool	isFloat(std::string av)
{
	for (int i = 0; av[i]; i++)
	{
		if (!isdigit(av[i]) && av[i] != '.' && av[i] != 'f' && av[0] != '-')
			return (false);
	}
	if (av.find('.') == std::string::npos || av.find('.') == 0 || av.find('.') == av.size() - 1)
		return (false);
	if (av.find('.') != av.rfind('.'))
		return (false);
	return (true);
}

bool	isDouble(std::string av)
{
	for (int i = 0; av[i]; i++)
	{
		if (!isdigit(av[i]) && av[i] != '.' && av[0] != '-')
			return (false);
	}
	if (av.find('.') == std::string::npos || av.find('.') == 0 || \
		av.find('.') == av.size() - 1)
		return (false);
	if (av.find('.') != av.rfind('.'))
		return (false);
	return (true);
}
