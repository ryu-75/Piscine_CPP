/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:15:44 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/17 19:00:15 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, const std::string &target) :
	Form(name, 145, 137)
{
	std::cout << "ShrubberyCreationForm overload constructor called" << std::endl;
	this->m_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy)
{
	std::cout << "ShrubberyCreationForm constructor copy called" << std::endl;
	this->m_target = copy.m_target;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->m_target = rhs.m_target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

const std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->m_target);
}

void	ShrubberyCreationForm::execForm(void) const
{
	std::string	str = m_target;
	str.append("_shrubbery");
	std::ofstream	outfile(str.c_str());
	if (!outfile.is_open() || outfile.bad())
		throw FileOpenException();
	for (int i = 0; i < 5; i++)
	{
		outfile << "            # #### ####" << std::endl;
    	outfile << "      ### \\/#|### |/####" << std::endl;
		outfile << "     ##\\/#/ \\||/##/_/##/_#" << std::endl;
		outfile << "   ###  \\/###|/ \\/ # ###" << std::endl;
		outfile << " ##_\\_#\\_\\## | #/###_/_####" << std::endl;
		outfile << "## #### # \\ #| /  #### ##/##" << std::endl;
		outfile << " __#_--###`  |{,###---###-~" << std::endl;
		outfile << "           \\ }{" << std::endl;
		outfile << "            }}{" << std::endl;
		outfile << "            }}{" << std::endl;
		outfile << "            {{}" << std::endl;
		outfile << "      , -=-~{ .-^- _" << std::endl;
		outfile << "            `}" << std::endl;
		outfile << "             {" << std::endl;
		if (outfile.bad())
		{
			outfile << std::endl;
			outfile.close();
			throw WriteInFiles();
		}
	}
	std::cout << std::endl;
	outfile.close();
}
