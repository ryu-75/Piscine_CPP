/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:17:58 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/03 15:16:08 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	ac -= 1;
	if (ac < 4)
	{
		std::cout << "Error: arguments can't be inferior to 3" << std::endl;
		return (1);
	}
	PmergeMe	merge(0, 0);

	merge.parseValue(av, ac);
	// Parse all arguments
	// Stack all value into a vector
	// Display all unsort value at the call of the program
	return (0);
}
