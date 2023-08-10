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
#include <climits>

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
        void    catchError(std::string arg);

        std::string calculate(std::string arg);

        class   ParsException
        {
            public :
                ParsException(const std::string &message) : _message(message) {}
            const char  *what() const;
            private :
                std::string   _message;
        };
    private:
        std::stack<int>  _stack;
};

#endif // ***************** RPN_HPP *****************
