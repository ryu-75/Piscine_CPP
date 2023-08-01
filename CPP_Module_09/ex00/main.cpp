/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:19:12 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 12:49:43 by nlorion          ###   ########.fr       */
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

	See again the exception. Core dumped to fix
	
	
*/
int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Error: miss a second arguments" << std::endl, 1);
	try
	{
		Btc	bitcoin(av[1]);
	}
	catch (Btc::ExceptionBtc & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
