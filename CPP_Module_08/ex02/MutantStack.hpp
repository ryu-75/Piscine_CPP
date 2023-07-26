/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:09:29 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/26 17:30:17 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <algorithm>

template	<typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
			std::cout << "MutantStack default constructor called" << std::endl;
		};

		MutantStack(const MutantStack &copy)
		{
			std::cout << "MutantStack copy constructor called" << std::endl;
			*this = copy;
		};

		virtual ~MutantStack()
		{
			std::cout << "MutantStack destructor called" << std::endl;
		};

		MutantStack&	operator=(const MutantStack &copy)
		{
			*this = &copy;
		};

		typedef typename std::deque<T>::iterator	iterator;
		iterator	begin(void)
		{
			return (this->c.begin());
		};

		iterator	end(void)
		{
			return (this->c.end());
		};
};

#endif // ************************** MUTANTSTACK_HPP **************************
