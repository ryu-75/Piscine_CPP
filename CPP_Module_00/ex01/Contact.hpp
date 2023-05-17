/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:54:17 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/17 12:54:18 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		~Contact();
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
