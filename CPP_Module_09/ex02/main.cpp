/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:17:58 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/03 19:45:02 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if ((ac - 1) < 3)
	{
		std::cout << "Error: arguments can't be inferior to 3" << std::endl;
		return (1);
	}
	PmergeMe	merge(0, 0);

	// Parse all arguments
	merge.parseValue(av, (ac - 1));
	// Stack all value into a vector
	// Display all unsort value at the call of the program
	std::cout << merge;
	return (0);
}
