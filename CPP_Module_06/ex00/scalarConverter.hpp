/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:50:18 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/19 15:48:11 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstddef>
#include <cstdlib>
#include <iomanip>
#include <climits>

// ************************* FUNCTIONS *******************************

bool	isChar(std::string av);
bool	isInt(char *av);
bool	isFloat(std::string av);
bool	isDouble(std::string av);

void	toChar(char c);
void	toInt(int num);
void	toFloat(float num);
void	toDouble(double num);
void	convert(char *argv);

void	displayChar(int c);
void	displayNan(void);
void	displayInf(std::string s);
void	infOrNan(std::string s);
#endif // ********************* CONVERT_HPP **************************
