/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:27:44 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/26 17:44:16 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "# \e[1m\e[34mStandard test\e[0m #" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "Display top : " << mstack.top() << std::endl;
		mstack.pop();	// Delete the last element which was add
		std::cout << "Size of stack : "<< mstack.size() << std::endl;

		std::cout << "Iterate in stack : " << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << "# \e[1m\e[34mOther test\e[0m #" << std::endl;
	{
		MutantStack<float>	fstack;

		for (int i = 0; i <= 10; i++)
			fstack.push(i * 2.2);

		std::cout << "Display top : "<< fstack.top() << std::endl;

		MutantStack<float>::iterator	it = fstack.begin();
		MutantStack<float>::iterator	ite = fstack.end();

		std::cout << "Iterate in stack : " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}
