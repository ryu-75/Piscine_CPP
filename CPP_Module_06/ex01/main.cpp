/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:11:51 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/20 10:44:14 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	src;
	Data	*dest;
	uintptr_t	raw;

	src.msg = "Earth 616";
	raw = serialize(&src);
	dest = deserialize(raw);
	std::cout << "Source : " << src.msg << std::endl;
	std::cout << "Adresse : " << &src.msg << std::endl;
	std::cout << "Raw : " << raw << std::endl;
	std::cout << "Dest : " << dest->msg << std::endl;
	return (0);
}
