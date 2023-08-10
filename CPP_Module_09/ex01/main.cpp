/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:51:41 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 12:51:41 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "Error: bad argument" << std::endl, 1);
    try
    {
        Rpn rpn;

        std::cout << rpn.calculate(av[1]) << std::endl;
    }
    catch (Rpn::ParsException &e)
    {
        std::cout << e.what() << "\n";
    }
    return (0);
}
