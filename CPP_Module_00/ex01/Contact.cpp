/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:54:13 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/17 12:54:14 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::m_fieldContact[5] =
{
	"First Name",
	"Last Name",
	"Nick Name",
	"Phone",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= Secret; i++)
		m_information[i] = std::string();
}

bool	Contact::setContact(int index)
{
    m_index = index;
	size_t	lenght = 0;

	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "# " << Contact::m_fieldContact[i] << std::endl;
		if (!std::getline(std::cin, m_information[i]))
			return (false);
		if (m_information[i].size() == 0)
			i--;
	}
	for (int i = FirstName; i <= Secret; i++)
	{
		lenght += m_information[i].size();
		if (lenght == 0)
		{
			std::cout << "# Contact not added ! " << std::endl;
			return (false) ;
		}
	}
	std::cout << "# Contact added ! " << std::endl;
	return (true);
}

void	Contact::displayHeader()
{
	std::cout << "|" << std::setw(10) << m_index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (m_information[i].size() > 10)
			std::cout << m_information[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << m_information[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::displayContact()
{
	std::cout << "# Contact [" << m_index << "]" << std::endl;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << Contact::m_fieldContact[i] << ": ";
		std::cout << m_information[i] << std::endl;
	}
}

Contact::~Contact()
{
}


