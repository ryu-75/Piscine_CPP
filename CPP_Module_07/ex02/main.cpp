/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:45:32 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/07 11:54:57 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"
int	main(void)
{
	Array<float>	voidTest;
	Array<int>	test(5);
	Array<std::string>	testChar(2);
	std::cout << std::endl;

	test[0] = 5;
	test[1] = 12;
	test[2] = 35;
	test[3] = -31;
	test[4] = 11;

	std::cout << "# Test : ";
	for (int i = 0; i < test.size(); i++)
	{
		if (i < test.size() - 1)
			std::cout << test[i] << ", ";
		else
			std::cout << test[i];
	}
	std::cout << std::endl;

	testChar[0] = "Coucou";
	testChar[1] = "ca va";
	std::cout << std::endl;

	std::cout << "# TestChar : " << testChar[0] << " " << testChar[1] << std::endl;
	std::cout << std::endl;

	try
	{
		std::cout << voidTest[0] << std::endl;
		std::cout << testChar[3] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << "\n";
	}

	std::cout << std::endl;
	std::cout << "Size of voidTest : " << voidTest.size() << std::endl;
	std::cout << "Size of test : " << test.size() << std::endl;
	std::cout << "Size of testChar : " << testChar.size() << std::endl;
	std::cout << std::endl;

	Array<int>	copy(test);
	std::cout << std::endl;

	std::cout << "# Copy of test 1 : ";
	for (int i = 0; i < copy.size(); i++)
	{
		if (i < copy.size() - 1)
			std::cout << copy[i] << ", ";
		else
			std::cout << copy[i] << std::endl;
	}
	std::cout << std::endl;

	copy[0] = 420;
	copy[1] = 7;

	std::cout << "# Copy of test 2 : ";
	for (int i = 0; i < copy.size(); i++)
	{
		if (i < copy.size() - 1)
			std::cout << copy[i] << ", ";
		else
			std::cout << copy[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "# Test unmodified : ";
	for (int i = 0; i < test.size(); i++)
	{
		if (i < test.size() - 1)
			std::cout << test[i] << ", ";
		else
			std::cout << test[i] << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
