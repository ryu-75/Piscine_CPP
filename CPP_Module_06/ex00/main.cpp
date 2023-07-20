/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:00:49 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/19 16:02:35 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "\e[34m\e[1m<ScalarConverter>\e[0m : Waiting one argument only" << std::endl;
		exit (1);
	}
	std::string	s = argv[1];
	infOrNan(s);
	convert(argv[1]);
	return (0);
}
