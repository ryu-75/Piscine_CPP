/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:18:06 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/04 14:15:39 by nlorion          ###   ########.fr       */
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

typedef struct	edge
{
	int	vertices;	// (also known as a node)
	int	destination;
	int	src;
	int	weight;
}	edge;

// std::vector<typename T>	stackValue;
class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(edge s_edges, int vertices);
		PmergeMe(const PmergeMe &lhs);
		~PmergeMe();

		PmergeMe&	operator=(const PmergeMe &copy);

		void	parseValue(char **av, int ac);
		void	displayUnsorted(void) const;
		void	initGraph(std::vector<edge> const &edges, int size, char **av);

		size_t	getSize(void) const;
		class ExceptionNegVal
		{
			public :
				virtual void	what() const throw()
				{
					std::cerr << "🔺  Exception : accept positive value only" << std::endl;
				}
		};

	private:
		std::vector<int>	_stackValue;
		std::vector<int>	_stackTest;
		// std::list<int<Matrix>>	_adjacencyList;
};

std::ostream&	operator<<(std::ostream &flux, const PmergeMe &input);


#endif // ************************* PMERGEME_HPP *************************
