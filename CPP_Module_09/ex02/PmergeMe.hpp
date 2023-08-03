/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:18:06 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/03 19:40:53 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <ostream>
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
		void	displayUnsorted(void) const;

		class ExceptionNegVal
		{
			public: 
				ExceptionNegVal(const std::string &msg) : _message(msg) {}
 			const char* what() const;
			private:
				std::string	_message;
		};

		int	_destination;
		int	_weight;
	private:
		PmergeMe();
		// int	_vertices
		// std::list<int<Matrix>>	_adjacencyList;
		std::vector<int>	_stackValue;
};

std::ostream&	operator<<(std::ostream &flux, const PmergeMe &input);


#endif // ************************* PMERGEME_HPP *************************
