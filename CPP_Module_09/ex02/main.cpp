/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:17:58 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/04 13:33:13 by nlorion          ###   ########.fr       */
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
	edge	s_edges;
	int	countNode = ac - 1;		// Number of nodes (size of the array)
	PmergeMe	merge(s_edges, countNode);

	std::vector<edge>	edges (countNode);

	// Parse all arguments
	merge.parseValue(av, countNode);
	merge.initGraph(edges, countNode, av);

	// Check size of our vector
	std::cout << "Number of node: " << merge.getSize() << std::endl;

	/* Display our content with :
		- Unsorted value
		- Sorted value
		- Timer to see how much time our program take to sort with a vector
		- Timer to see how much time our program take to sort with a list
	*/
	std::cout << merge;
	// Stack all value into a vector
	// Display all unsort value at the call of the program
	return (0);
}
