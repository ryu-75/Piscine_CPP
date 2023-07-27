/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:19:12 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/27 16:03:21 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
	- We need to read our data file. "./btc data.csv"
	- If we met a coma, stack the previous value,
	  it's mean either a date or exchange rate of bitcoin

	- A valid date will always be in the following format: Year-Month-Day
	- Stack the date format in std::string
	- Stack exchange bitcoin value to a float or positive integer
	- Value must be either a float or a positive integer 0 and 1000.
*/

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: Need a file in second argument" << std::endl;
		exit(1);
	}
	std::ifstream	file(av[1]);
	std::string	coma;
	std::string	date;
	std::map<std::string, unsigned int>	btc;


	if (file.is_open() == true)
	{
		char	stack[100];
		char	c;
		int	i = 0;
		while (file.get(c))
		{
			stack[i] = c;
			std::cout << stack << std::endl;
			i++;
		}
	}
	// while (!file.eof())
	// {
	// 	if (getline(file, coma, ','))
	// 		std::cout << coma << std::endl;
	// }
	return (0);
}