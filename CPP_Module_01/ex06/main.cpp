/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:39:15 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/15 13:22:28 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char *av[])
{
	Harl	harl;
	if (ac != 2)
	{
		std::cout << "# \e[1m Invalid argument\e[0m #" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
