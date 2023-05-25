/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:45:42 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/25 15:58:20 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
public :
	Cat();
	Cat(std::string type);
	Cat(Cat const& copy);
	Cat&	operator=(Cat const& copy);
	void	makeSound(void) const;
	void	display(void) const;
	~Cat();
};

#endif // #.......................... CAT_HPP ..............................#
