/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:15:45 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 14:00:07 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <cstdlib>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name, std::string m_target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &rhs);
		
		static const std::string	&name;

		void	execForm(void) const;

		class	FileOpenException
		{
			public :
				virtual void	what() const throw()
				{
					std::cout << "ShrubberyCreationFormException: Cannot open file" << std::endl;
				}
		};
		class	WriteInFiles
		{
			public :
				virtual void	what() const throw()
				{
					std::cout << "ShrubberyCreationFormException: Error doesn't write in file" << std::endl;
				}
		};

		const std::string	getTarget(void) const;

	private:
		std::string	m_target;
};

#endif  // ************************ SHRUBBERYCREATIONFORM_HPP ********************************
