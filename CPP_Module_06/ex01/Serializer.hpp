/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:12:10 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/20 10:43:50 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

typedef struct	s_Data
{
	std::string	msg;
}		Data;

Data*	deserialize(uintptr_t raw);
uintptr_t	serialize(Data* ptr);
#endif // ************** SERIALIZER_HPP **************
