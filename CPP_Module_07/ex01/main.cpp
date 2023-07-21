/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:16:43 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/21 10:43:50 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	doub(int &nb)
{
	nb *= 2;
}

void	trip(float &nb)
{
	nb *= 3;
}

int	main(void)
{
	int	tab1[] = {1, 2, 3, 4, 5, 6};
	float	tab2[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f};

	::iter(tab2, 6, trip);
	::iter(tab1, 6, doub);

	for (int i = 0; i < 6; i++)
	{
		std::cout << tab1[i] << " ";
		std::cout << std::endl;
	}

	for (int i = 0; i < 6; i++)
	{

		std::cout << tab2[i] << " ";
		std::cout << std::endl;
	}
	return (0);
}
