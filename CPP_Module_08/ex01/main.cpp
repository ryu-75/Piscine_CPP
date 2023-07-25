/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:20:04 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/25 15:42:01 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	sp(5);
	Span	spanOne(10);
	Span	spanTwo(1);
	Span	spanThree(4);

	std::cout << std::endl;
	std::cout << "# \e[1m\e[34mMandatory test\e[0m #" << std::endl;
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.dispVector();
		std::cout << "Shortest → " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  → " << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << "\n";
	}

	std::cout << std::endl;
	std::cout << "# \e[1m\e[34mTest with too much values\e[0m #" << std::endl;
	try
	{
		spanOne.addMoreItem(10);
		spanOne.dispVector();
		spanOne.addNumber(22);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << "\n";
	}

	std::cout << std::endl;
	std::cout << "# \e[1m\e[34mTest with not enough values\e[0m #" << std::endl;
	try
	{
		spanTwo.addNumber(5);

		spanTwo.dispVector();
		std::cout << spanTwo.shortestSpan() << std::endl;
		std::cout << spanTwo.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout<< std::endl;
	std::cout << "# \e[1m\e[34mTest with negative values\e[0m #" << std::endl;
	try
	{
		spanThree.addNumber(-5);
		spanThree.addNumber(-1);
		spanThree.addNumber(-12);
		spanThree.addNumber(-55);

		spanThree.dispVector();
		std::cout << "Shortest → " << spanThree.shortestSpan() << std::endl;
		std::cout << "Longest  → " << spanThree.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	return (0);
}
