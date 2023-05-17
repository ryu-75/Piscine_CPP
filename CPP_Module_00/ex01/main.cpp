/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:54:36 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/17 12:40:34 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

int main(void)
{
    Annuaire    annuaire;
    std::string  command;

    annuaire.launch();
    std::cout << std::endl;
    while (1)
    {
        std::cout << "> ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            break ;
        else if (command == "ADD")
            annuaire.setContact();
        else if (command == "SEARCH")
            annuaire.searchContact();
        else if (command == "EXIT")
        {
            std::cout << "Good bye !" << std::endl;
            break ;
        }
    }
    return (0);
}
