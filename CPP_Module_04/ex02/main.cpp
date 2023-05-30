/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:35 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 14:49:37 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << std::endl << BOLD << "[SUBJECT TEST]" << R << std::endl << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl << BOLD << "[ARRAY TEST]" << R << std::endl << std::endl;

	Animal	*myArray[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			myArray[i] = new Dog();
		else
			myArray[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		myArray[i]->makeSound();
 	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete myArray[i];
	std::cout << std::endl;

	std::cout << std::endl << BOLD << "[IDEAS TEST]" << R << std::endl << std::endl;

	Dog	d_1;

	std::cout << RED BOLD << d_1.getType() << R << " said : ";
	d_1.setIdeas("I need to eat something plzzz", 0);
	d_1.getIdeas(0);
	std::cout << std::endl;

	Dog	d_2 = Dog(d_1);

	std::cout << RED BOLD << d_2.getType() << R << " said : ";
	d_2.setIdeas("I already eaten", 0);
	d_2.getIdeas(0);
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		d_2.setIdeas(d_2.getType() + " said once time again : I already eaten", i);
		d_2.getIdeas(i);
	}
	std::cout << std::endl;

	Cat	c_1;

	std::cout << RED BOLD << c_1.getType() << R << " said : ";
	c_1.setIdeas("I need to eat something plzzz", 0);
	c_1.getIdeas(0);
	std::cout << std::endl;

	Cat	c_2 = Cat(c_1);

	std::cout << RED BOLD << c_2.getType() << R << " said : ";
	c_2.setIdeas("I already eated", 0);
	c_2.getIdeas(0);
	std::cout << std::endl;

	std::cout << "[NOT INSTANTIABLE]" << std::endl;

	return (0);
}
