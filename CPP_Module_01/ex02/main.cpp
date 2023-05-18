/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:25:52 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 12:22:05 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	zombieSaid;
	std::string	*zombieSaidPTR;

	zombieSaid = "HI THIS IS BRAIN";
	std::string	&zombieSaidREF = zombieSaid;
	zombieSaidPTR = &zombieSaid;
	std::cout << "\e[92m\e[1mAddress\e[0m :" << std::endl;
	std::cout << "String : " << &zombieSaid << std::endl;
	std::cout << "String pointer : " << zombieSaidPTR << std::endl;
	std::cout << "String ref :" << &zombieSaidREF << std::endl;
	std::cout << std::endl;

	std::cout << "\e[92m\e[1mValue\e[0m :" << std::endl;
	std::cout << "String : " << zombieSaid << std::endl;
	std::cout << "String pointer : " << *zombieSaidPTR << std::endl;
	std::cout << "String ref : " << zombieSaidREF << std::endl;
	return (0);
}
