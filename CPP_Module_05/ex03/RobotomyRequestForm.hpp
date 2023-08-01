/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:15:47 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 13:59:43 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name, std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs);

		void	execForm(void) const;

		class	RobotomizerException
		{
			public :
				virtual void	what() const throw()
				{
					std::cout << "You can't be robotomizer my dear" << std::endl;
				}
		};
	private:
		std::string	m_target;
};

#endif // ******************** ROBOTOMYREQUESTFORM_HPP ***********************
