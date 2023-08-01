/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:15:48 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 13:00:54 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTILPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string name, const std::string &target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);
		virtual ~PresidentialPardonForm();

		void	execForm(void) const;

	private:
		PresidentialPardonForm();

		std::string	m_target;
};

#endif // ********************* PRESIDENTIALPARDONFORM_HPP **********************************
