/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:18:06 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/10 20:25:14 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <ostream>
#include <cstring>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <time.h>
#include <limits.h>

class PmergeMe
{
	public:
		// ************** ALIASES *******************
		typedef std::vector<int>	_vector;
		typedef std::deque<int>		_deque;

		// ************** CONS / DES ****************
		PmergeMe(char **av);
		PmergeMe(const PmergeMe &copy);
		~PmergeMe();

		PmergeMe&	operator=(const PmergeMe &lhs);

		// ************** METHODS *******************
		void	parseToken(std::string tkn);

		template <typename T>
		int	jacobsthal(T n);

		template <typename T>
		void	indexSort(T &content);

		template <typename T>
		void	displayValue(T& v_cont);

		template <typename T>
		double	displayResult(T& cont);

		template <typename T>
		void	mergeSortHelper(T &content, int left, int right);

		template <typename T>
		void	merge(T &content, int left, int mid, int right);

		template <typename T>
		void	mergeSort(T &content);

		template <typename T, typename U, typename V>
		void	insertSort(T &content, U &indexPairs, V &indexOdds);


		struct ComparePairs
		{
    		bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const
			{
        		return a.second < b.second;
    		}
		};

		// ************** TRY / CATCH ***************
		class MergeException
		{
			public :
				MergeException(const std::string &message) : _message(message) {}
			const char	*what() const;
			private :
				const std::string	_message;
		};
	private:
		PmergeMe();
		_vector	_vec;
		_deque	_deq;
};

#endif // ************************* PMERGEME_HPP *************************
