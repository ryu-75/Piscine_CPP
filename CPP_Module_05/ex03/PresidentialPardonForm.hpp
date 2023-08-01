/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:15:48 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 13:59:16 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
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
