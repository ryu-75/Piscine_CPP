/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:12:07 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/20 10:18:35 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast< Data* >(raw));
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast< uintptr_t >(ptr));
}
