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
