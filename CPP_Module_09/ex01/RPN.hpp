/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:51:45 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 12:51:45 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <sstream>

class Rpn
{
    public:
        Rpn();
        Rpn(const Rpn &copy);
        ~Rpn();

        Rpn&    operator=(const Rpn &lhs);

        void    addition(void);
        void    multiple(void);
        void    division(void);
        void    soustraction(void);
        std::string calculate(std::string arg);
    
    private:
        std::stack<int>  _stack;
};

#endif // ***************** RPN_HPP *****************