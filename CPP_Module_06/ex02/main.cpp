/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:55:36 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/20 12:13:28 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{
	Base	*ptrBase = generate();
	Base	&refBase = *ptrBase;
	
	identify(ptrBase);
	identify(refBase);
	delete ptrBase;
	return (0);
}
