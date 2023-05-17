/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:55:00 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/17 12:51:36 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

int Annuaire::m_i = 0;

Annuaire::Annuaire() : m_amount(0)
{
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
    for (int i = 0; i <= 44; i++)
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
    if (m_amount == 8)
    {
        if (m_i == 8)
            m_i = 0;
        m_contacts[m_i].setContact(m_i + 1);
        ++m_i;
    }
    else if (m_contacts[m_amount].setContact(m_amount + 1))
        m_amount++;
    else
        return (false);
    for (int i = 0; i <= 44; i++)
        std::cout << "*";
    std::cout << std::endl;
    return (true);
}

void    Annuaire::getAnnuaire(void)
{
    setRaw();
    for (int i = 0; i < m_amount; i++)
        m_contacts[i].displayHeader();
}

bool    Annuaire::searchContact(void)
{
    int index = 0;

    if (m_amount == 0)
        std::cout << "# You need to add a contact before searching" << std::endl;
    else
    {
        getAnnuaire();
        while (!(std::cin >> index) || (index <= 0 || index > 8 || index > m_amount))
        {
            std::cin.clear();
            std::cin.ignore();
        }
        std::cin.ignore();
        if (index > 0)
        {
            m_contacts[index - 1].displayContact();
            return (true);
        }
    }
    return (false);
}

Annuaire::~Annuaire()
{
}

