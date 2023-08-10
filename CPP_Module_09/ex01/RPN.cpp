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

const char* Rpn::ParsException::what() const { return (_message.c_str()); }
Rpn::Rpn() {}
Rpn::Rpn(const Rpn &copy) { *this = copy; }
Rpn::~Rpn() {}

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

void    Rpn::catchError(std::string arg)
{
    uint    countAr = 0;
    uint    countNb = 0;
    int res = 0;
    int y = 0;

    for (size_t i = 0; i < arg.size(); i++)
    {
        while (arg[y] >= '0' && arg[y] <= '9')
            res = res * 10 + (arg[y++] - 48);
        if (res > 9)
            throw ParsException("🔺  Error: too bigs");
        if (arg[i] == 42 || arg[i] == 43 || arg[i] == 45 || arg[i] == 47)
        {
            countAr += 1;
            if (countNb == 1 && countAr == 1)
                throw ParsException("🔺  Error: syntax");
        }
        if ((arg[i] >= '0' && arg[i] <= '9') && arg[i + 1] == ' ')
            countNb += 1;
    }
    if (arg.size() > 1 && (countAr >= countNb || countAr < (countNb - 1)))
        throw ParsException("🔺  Error: too much or not enough operator");
}

std::string Rpn::calculate(std::string arg)
{
    std::ostringstream  res;

    catchError(arg);
    for (size_t i = 0; i < arg.size(); i++)
    {
        if (arg[i] >= '0' && arg[i] <= '9' &&
            arg[i + 1] >= '0' && arg[i + 1] <= '9')
            throw ParsException("🔺  Error: too big");
    }
    for (size_t i = 0; i < arg.size(); i++)
    {
        if (isdigit(arg[i]) || (arg[i] == '-' && arg[i + 1] && isdigit(arg[i + 1])))
        {
            if (arg[i]== '-')
                _stack.push((arg[i]) - 48 * -1);
            else
                _stack.push((arg[i]) - 48);
        }
        if (arg[i] == '+' && _stack.size() != 0)
            addition();
        else if (arg[i] == '-' && _stack.size() != 0)
            soustraction();
        else if (arg[i] == '*' && _stack.size() != 0)
            multiple();
        else if (arg[i] == '/' && _stack.size() != 0 && _stack.top() != 0)
            division();
    }
    if (_stack.size() == 0)
        return ("Error: empty");
    res << _stack.top();
    return (res.str());
}
