#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		Contact();
		bool	setContact(int index);
		void	displayHeader();
		void	displayContact();
		virtual	~Contact();
	private:
		int	m_index;
		static std::string	m_fieldContact[5];
		std::string	m_information[5];
		enum Field
		{
			FirstName = 0,
			LastName,
			NickName,
			Number,
			Secret
		};
};

#endif
