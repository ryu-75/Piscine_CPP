/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:17:58 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/10 12:28:20 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error: argument number invalid" << std::endl;
		return (1);
	}
	else
	{
		try
		{
			PmergeMe	merge(av);
		}
		catch (PmergeMe::MergeException& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
