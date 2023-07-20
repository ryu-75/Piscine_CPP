/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:15:48 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/18 12:27:19 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTILPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name, std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);
		virtual ~PresidentialPardonForm();

		void	execForm(void) const;

	private:
		std::string	m_target;
};

#endif // ********************* PRESIDENTIALPARDONFORM_HPP **********************************
