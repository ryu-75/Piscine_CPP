/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:25:09 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/21 13:15:03 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	std::cout << "Array default constructor called" << std::endl;
	this->m_array = new T[0];
	this->m_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Array overload constructor called" << std::endl;
	this->m_array = new	T[n];
	this->m_size = n;
}

template<typename T>
Array<T>::Array(const Array<T> &copy)
{
	std::cout << "Array copy constructor called" << std::endl;
	this->m_array = new	T[copy.m_size];
	this->m_size = copy.m_size;
	for (int i = 0; i < this->m_size; i++)
		this->m_array[i] = copy.m_array[i];
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T> &rhs)
{
	if (this == &rhs)
		return (*this);
	delete [] this->m_array;
	this->m_array = new	T[rhs.m_size];
	this->m_size = rhs.m_size;
	for (int i = 0; i < this->m_size; i++)
		this->m_array[i] = rhs.m_array[i];
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Array destructor called" << std::endl;
	delete [] this->m_array;
}

template<typename T>
T & Array<T>::operator[](const int &idx)
{
	if (idx >= this->m_size || idx < 0 || this->m_size == 0)
		throw (Array<T>::indexException());
	return (this->m_array[idx]);
}

template<typename T>
int const	& Array<T>::size(void) const
{
	return (this->m_size);
}
