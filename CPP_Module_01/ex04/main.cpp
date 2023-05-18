/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 10:13:07 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/18 13:07:08 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <limits>

int	checkArguments(int ac, char **av, std::ifstream &src)
{
	if (ac != 2)
	{
		std::cout << "./createFile [filename]" << std::endl;
		return (1);
	}
	src.open(av[1]);
	if (!(src.is_open()))
	{
		std::cout << "File doesn't exit or you do not have the autorization" << std::endl;
		return (1);
	}
	return (0);
}

int	writeYourText(std::string &target, std::string &replace)
{
	while (target.empty())
	{
		std::cout << "# \e[1mENTER THE TEXT TO MODIFY\e[0m #" << std::endl;
		std::cout << "> ";
		if (!(std::getline(std::cin, target)))
		{
			std::cout << std::endl;
			std::cout << "Field empty" << std::endl;
			return (1);
		}
	}
	while (replace.empty())
	{
		std::cout << "# \e[1mENTER TEXT EDIT\e[0m #" << std::endl;
		std::cout << "> ";
		if (!(std::getline(std::cin, replace)))
		{
			std::cout << std::endl;
			std::cout << "Field empty" << std::endl;
			return (1);
		}
	}
	return (0);
}

void	getEachLine(std::string &buf, std::string &line, std::string &target, std::string &replace)
{
	int	pos = 0;
	std::string	tmp;

	while ((pos = buf.find(target)) >= 0)
	{
		tmp = buf.substr(0, buf.find(target));
		line = line.append(tmp + replace);
		buf = buf.substr(pos + target.size());
	}
	line.append(buf);
}

int	main(int ac, char **av)
{
	std::ifstream	src;
	std::string	buf;
	std::string	line;
	std::string	target;
	std::string	replace;

	if (checkArguments(ac, av, src))
		return (1);
	std::cout << "# \e[32m\e[1mCREATE AND REPLACE FILE CONTENT\e[0m #" << std::endl << std::endl;
	if (writeYourText(target, replace))
		return (1);
	std::ofstream	dest(strcat(av[1], ".replace"));
	if (!(dest.is_open()))
		return (1);
	while (getline(src, buf))
	{
		getEachLine(buf, line, target, replace);
		dest << line;
		line.clear();
		if (!src.eof())
			dest << std::endl;
	}
	src.close();
	dest.close();
	return (0);
}
