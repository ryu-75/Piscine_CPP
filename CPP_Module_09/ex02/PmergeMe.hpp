/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:18:06 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/03 15:14:27 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <cstdlib>

// std::vector<typename T>	stackValue;
class PmergeMe
{
	public:
		PmergeMe(int destination, int weight);
		PmergeMe(const PmergeMe &lhs);
		~PmergeMe();

		PmergeMe&	operator=(const PmergeMe &copy);

		void	parseValue(char **av, int ac);

		int	_destination;
		int	_weight;
	private:
		PmergeMe();
		// int	_vertices
		// std::list<int<Matrix>>	_adjacencyList;
		std::vector<int>	_stackValue;
};


#endif // ************************* PMERGEME_HPP *************************
