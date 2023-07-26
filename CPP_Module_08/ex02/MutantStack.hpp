/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:09:29 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/26 14:43:19 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <string>
#include <iterator>

template	<typename T, typename Container = std::deque<T>>
class	MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename std::stack<T>::container_type::iterator	iterator;
		MutantStack()
		{
			std::cout << "MutantStack default constructor called" << std::endl;
		}

		MutantStack(const MutantStack &rhs)
		{
		}

		~MutantStack()
		{
			std::cout << "MutantStack destructor called" << std::endl;
		}

		MutantStack&	operator=(const MutantStack &copy)
		{
			std::cout << "MutantStack copy constructor called" << std::endl;
			this->_c = copy._c;
			return (*this);
		}

		iterator	push(void)
		{
			return (this->c.push());
		}

		iterator	pop(void)
		{
			return (this->c.pop());
		}
	private:
		std::deque<int>	_c;
};

#endif // ************************** MUTANTSTACK_HPP **************************
