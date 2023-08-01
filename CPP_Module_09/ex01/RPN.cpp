/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:51:43 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 12:51:43 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn()
{
    std::cout << "Rpn default constructor called" << std::endl;
}

Rpn::Rpn(const Rpn &copy)
{
    std::cout << "Rpn copy constructor called" << std::endl;
    *this = copy;
}   

Rpn::~Rpn()
{
    std::cout << "Rpn destructor called" << std::endl;
}

Rpn&    Rpn::operator=(const Rpn &lhs)
{
    if (this != &lhs)
        this->_stack = lhs._stack;
    return (*this);
}

void    Rpn::addition(void)
{
    int res = 0;

    res = _stack.top();
    _stack.pop();
    res = _stack.top() + res;
    _stack.pop();
    _stack.push(res); 
}

void    Rpn::soustraction(void)
{
    int res = 0;

    res = _stack.top();
    _stack.pop();
    res = _stack.top() - res;
    _stack.pop();
    _stack.push(res); 
}

void    Rpn::multiple(void)
{
    int res = 0;

    res = _stack.top();
    _stack.pop();
    res = _stack.top() * res;
    _stack.pop();
    _stack.push(res); 
}

void    Rpn::division(void)
{
    int res = 0;

    res = _stack.top();
    _stack.pop();
    res = _stack.top() / res;
    _stack.pop();
    _stack.push(res); 
}

std::string Rpn::calculate(std::string arg)
{
    std::ostringstream  res;

    for (size_t i = 0; i < arg.size(); i++)
    {
        if (isdigit(arg[i]) || (arg[i] == '-' && arg[i + 1] && isdigit(arg[i + 1])))
        {
            if (arg[i]== '-')
                _stack.push((arg[i]) - 48 * -1);
            else
                _stack.push((arg[i]) - 48);
        }
        else if (arg[i] == '+' && _stack.size() != 0)
            addition();
        else if (arg[i] == '-' && _stack.size() != 0)
            soustraction();
        else if (arg[i] == '*' && _stack.size() != 0)
            multiple();
        else if (arg[i] == '/' && _stack.size() != 0 && _stack.top() != 0)
            division();
        else if (arg[i] != ' ')
            return ("Error");
    }
    if (_stack.size() == 0)
        return ("Error");
    res << _stack.top();
    return (res.str());
}