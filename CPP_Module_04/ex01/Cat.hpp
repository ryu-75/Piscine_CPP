/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:45:42 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/26 14:55:35 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public :
	Cat();
	Cat(std::string type);
	Cat(Cat const& copy);
	Cat&	operator=(Cat const& copy);
	void	makeSound(void) const;
	~Cat();
private :
	Brain	*m_brain;
};

#endif // #.......................... CAT_HPP ..............................#
