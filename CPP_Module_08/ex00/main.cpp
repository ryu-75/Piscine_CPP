/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:29:21 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/25 12:16:42 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfound.hpp"

template <typename T>
void	easyfind(T val, int nb)
{
	try
	{
		if (std::find(val.begin(), val.end(), nb) != val.end())
		{
			std::cout << "✅  An occurence of " << nb << " are found." << std::endl;
			return ;
		}
		throw(std::exception());
	}
	catch(const std::exception& e)
	{
		std::cerr << "❌  An occurence of " << nb << " are not found." << std::endl;
	}
}

int	main(void)
{
	std::cout << "\e[34m\e[1m# WITH VECTOR #\e[0m" << std::endl;
	{
		std::vector<int>	vct(5);

		for (int i = 0; i < 5; i++)
		{
			vct[i] = i + 1;
			std::cout << "vct[" << i << "] = " << vct[i] << std::endl;
		}

		std::cout << std::endl;

		std::cout << "Let's found an occurence : " << std::endl;
		easyfind(vct, 4);
		easyfind(vct, 5);
		easyfind(vct, 6);

		std::cout << std::endl;

		std::cout << "Delete the last item : " << std::endl;
		vct.pop_back();
		easyfind(vct, 2);
		easyfind(vct, 5);
	}
		std::cout << std::endl;
		std::cout << "\e[34m\e[1m# WITH LIST #\e[0m" << std::endl;
	{
		std::list<int>	lst;

		lst.push_back(12);
		lst.push_back(-11);
		lst.push_back(26);
		lst.push_back(9);

		int	y = 0;
		for (std::list<int>::iterator i = lst.begin(); i != lst.end(); i++)
			std::cout << "lst[" << y++ << "] = " << *i << std::endl;

		std::cout << std::endl;

		std::cout << "Let's found an occurence : " << std::endl;
		easyfind(lst, 12);
		easyfind(lst, -11);
		easyfind(lst, 111);
	}
	return (0);
}
