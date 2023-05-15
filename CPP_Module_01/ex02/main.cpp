/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:25:52 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/12 12:42:13 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	zombieSaid;
	std::string	stringPTR;
	std::string	*stringREF;

	zombieSaid = "HI THIS IS BRAIN";
	stringPTR = zombieSaid;
	stringREF = &zombieSaid;

	std::cout << "\e[92m\e[1mAddress\e[0m :" << std::endl;
	std::cout << "String : " << &zombieSaid << std::endl;
	std::cout << "String pointer : " << &stringPTR << std::endl;
	
	std::cout << "String ref :" << stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "\e[92m\e[1mValue\e[0m :" << std::endl;
	std::cout << "String : " << zombieSaid << std::endl;
	std::cout << "String pointer : " << stringPTR << std::endl;
	std::cout << "String ref : " << *stringREF << std::endl;
	return (0);
}
