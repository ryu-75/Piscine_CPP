/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:15:47 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 13:00:58 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string name, const std::string &target);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		virtual ~RobotomyRequestForm();

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
		RobotomyRequestForm();

		std::string	m_target;
};

#endif // ******************** ROBOTOMYREQUESTFORM_HPP ***********************
