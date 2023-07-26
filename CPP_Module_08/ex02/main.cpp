/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:27:44 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/26 13:58:04 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	Mut;

	Mut.push(5);
	Mut.push(12);
	Mut.push(25);
	Mut.push(11);
	std::cout << Mut.top() << std::endl;

	Mut.pop();

	std::cout << Mut.top() << std::endl;


	return (0);
}
