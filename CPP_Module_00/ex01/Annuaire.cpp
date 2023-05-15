/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:55:00 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/10 21:30:28 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

Annuaire::Annuaire()
{
    this->amount = 0;
}

void    Annuaire::setRaw(void)
{
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << "INDEX";
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << "FIRSTNAME";
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << "LASTNAME";
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << "NICKNAME";
    std::cout << "|" << std::endl;
    for (int i = 0; i <= 66; i++)
        std::cout << "*";
    std::cout << std::endl;
    return ;
}

void    Annuaire::launch(void)
{
    std::cout << "# ANNUAIRE #" << std::endl;
    std::cout << "# Please enter your command [ADD, SEARCH, EXIT] #" << std::endl;
}

bool    Annuaire::setContact(void)
{
    int index;

    if (this->amount == 8)
    {
        index = 0;
        this->contacts[index].setContact(index + 1);
        index++;
    }
    else if (this->contacts[this->amount].setContact(this->amount + 1))
        this->amount++;
    else
        return (1);
    for (int i = 0; i <= 66; i++)
        std::cout << "*";
    std::cout << std::endl;
    return (0);
}

void    Annuaire::getAnnuaire(void)
{
    setRaw();
    for (int i = 0; i < this->amount; i++)
        this->contacts[i].displayHeader();
}

void    Annuaire::searchContact(void)
{
    int index = 0;
    if (this->amount == 0)
        std::cout << "# You need to add a contact before searching" << std::endl;
    else
    {
        getAnnuaire();
        while (!(std::cin >> index) || (index < 0 || index > this->amount))
        {
            std::cin.clear();
            std::cin.ignore();
        }
        std::cin.ignore();
        if (index > 0)
            this->contacts[index - 1].displayContact();
    }
}

Annuaire::~Annuaire()
{
}

