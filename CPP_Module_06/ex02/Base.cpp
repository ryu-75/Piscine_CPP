/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:56:27 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/20 12:19:29 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *	generate(void)
{
	int	random;
	Base	*gen;

	// Utilisation de l'horloge système actuelle pour générer une graine
	std::srand(static_cast<unsigned int>(std::time(0)));
	// Génére un nombre aléatoire entre 0 et 2
	random = rand() % 3;
	if (random == 0)
	{
		std::cout << "Generate : A" << std::endl;
		gen = new A();
	}
	else if (random == 1)
	{
		std::cout << "Generate : B" << std::endl;
		gen = new B();
	}
	else
	{
		std::cout << "Generate : C" << std::endl;
		gen = new C();
	}
	std::cout << "********************" << std::endl;
	return (gen);
}

void	identify(Base* p)
{
	Base	*base;

	base = dynamic_cast<A*>(p);
	std::cout << "Type of A : "<< base << std::endl;
	base = dynamic_cast<B*>(p);
	std::cout << "Type of B : " << base << std::endl;
	base = dynamic_cast<C*>(p);
	std::cout << "Type of C : " << base << std::endl;
	std::cout << "********************" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		Base	&a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "Is a reference of A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Is not a reference of A" << '\n';
	}
	try
	{
		Base	&b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "Is a reference of B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Is not a reference of B" << '\n';
	}	try
	{
		Base	&c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "Is a reference of C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Is not a reference of C" << '\n';
	}
	std::cout << "********************" << std::endl;
}

Base::~Base()
{

}
