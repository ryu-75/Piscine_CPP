/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:54:36 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/16 18:12:06 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

int main()
{
    Annuaire    annuaire;
    std::string  command;
    bool    run;

    annuaire.launch();
    std::cout << std::endl;
    run = true;
    while (run)
    {
        std::cout << "> ";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            if (annuaire.setContact() == 1)
                return (1);
        }
        else if (command == "SEARCH")
            annuaire.searchContact();
        else if (command == "EXIT")
        {
            std::cout << "Good bye !" << std::endl;
            run = false;
        }
    }
    return 0;
}
