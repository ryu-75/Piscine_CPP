/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:35 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 15:58:15 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main(void)
{
	const Animal	*meta = new Animal;
	const Animal	*myDog = new Dog;
	const Animal	*myCat = new Cat;

	myDog->makeSound();
	myCat->makeSound();

	meta->display();
	myDog->display();
	myCat->display();

	return (0);
}
