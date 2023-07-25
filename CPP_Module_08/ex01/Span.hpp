/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:20:02 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/25 15:42:26 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <climits>

class	Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &rhs);
		~Span();

		Span&	operator=(Span const &copy);

		void	addNumber(unsigned int n);
		void	dispVector(void) const;
		void	addMoreItem(unsigned int nb);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		class	MaxCapacity : public std::exception
		{
			virtual const char*	what() const throw();
		};
		class	NotEnoughNum : public std::exception
		{
			virtual const char*	what() const throw();
		};
	private:
		std::vector<int>	_vct;
		unsigned int	_nMax;
};

#endif // **************** SPAN_HPP ****************
