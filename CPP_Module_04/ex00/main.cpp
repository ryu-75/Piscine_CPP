/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:35 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/30 15:01:23 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*myDog = new Dog();
	const Animal	*myCat = new Cat();
	const WrongAnimal	*myWrongAnimal = new WrongCat();

	std::cout << std::endl;
	std::cout << "You've got " << meta->getType() << std::endl;
	std::cout << "You've got a " << myDog->getType() << std::endl;
	std::cout << "You've got a " << myCat->getType() << std::endl;
	std::cout << "You've got a " << myWrongAnimal->getType() << std::endl;

	std::cout << std::endl;
	meta->makeSound();
	myDog->makeSound();
	myCat->makeSound();
	myWrongAnimal->makeSound();

	std::cout << std::endl;
	delete meta;
	delete myDog;
	delete myCat;
	delete myWrongAnimal;
	return (0);
}
