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
		this->m_information[i] = std::string();
}

bool	Contact::setContact(int index)
{
    this->m_index = index;
	size_t	lenght = 0;

	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "# " << Contact::m_fieldContact[i] << std::endl;
		if (!std::getline(std::cin, this->m_information[i]))
			return (false);
	}
	for (int i = FirstName; i <= Secret; i++)
		lenght += this->m_information[i].size();
	if (lenght == 0)
	{
		std::cout << "# Contact not added ! " << std::endl;
		return (false);
	}
	std::cout << "# Contact added ! " << std::endl;
	return (true);
}

void	Contact::displayHeader()
{
	std::cout << "|" << std::setw(10) << this->m_index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->m_information[i].size() > 10)
			std::cout << this->m_information[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->m_information[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::displayContact()
{
	std::cout << "# Contact [" << this->m_index << "]" << std::endl;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << Contact::m_fieldContact[i] << ": ";
		std::cout <<this->m_information[i] << std::endl;
	}
}

Contact::~Contact()
{
}


