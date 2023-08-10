/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:23:07 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/10 12:29:37 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

const char	*PmergeMe::MergeException::what() const { return (_message.c_str()); }
PmergeMe::PmergeMe(const PmergeMe &copy) { *this = copy; }
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(char **tkn)
{
	for (int i = 1; tkn[i] != 0; i++)
	{
		parseToken(tkn[i]);
		this->_vec.push_back(atoi(tkn[i]));
		this->_deq.push_back(atoi(tkn[i]));
	}
	_vector	copy_vec = _vec;
	_deque	copy_deq = _deq;
	double	t_vec = displayResult(copy_vec);
	double	t_deq = displayResult(copy_deq);
	std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::vector : " << t_vec << " us" << std::endl;
	std::cout << "Time to process a range of " << this->_deq.size() << " elements with std::deque : " << t_deq << " us" << std::endl;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe &lhs)
{
	if (this != &lhs)
	{
		this->_vec = lhs._vec;
		this->_deq = lhs._deq;
		return (*this);
	}
	return (*this);
}

void	PmergeMe::parseToken(std::string tkn)
{
	for (size_t i = 0; i < tkn.size(); ++i)
	{
		if (atoi(tkn.c_str()) < 0 || atoi(tkn.c_str()) > INT_MAX)
		    throw MergeException("Error: value out of range");
		if (!isdigit(tkn[i]))
			throw MergeException("Error: invalid arguments");
	}
}

template <typename T>
void	PmergeMe::displayValue(T& v_cont)
{
	typename T::const_iterator	v_it = v_cont.begin();
	for (; v_it != v_cont.end(); v_it++)
	{
		std::cout << *v_it;
		if (v_it + 1 != v_cont.end())
			std::cout << ' ';
	}
	std::cout << std::endl;
}

template <typename T>
double	PmergeMe::displayResult(T& cont)
{
	std::cout << "\e[32m\e[1mBefore: \e[0m";
	displayValue(cont);

	clock_t	start = clock();
	mergeSort(cont);
	std::cout << std::endl;
	std::cout << "\e[32m\e[1mAfter: \e[0m";
	displayValue(cont);
	std::cout << std::endl;

	clock_t	end = clock() - start;
	double	time = static_cast<double>(end * 10000) / CLOCKS_PER_SEC;
	return (time);
}

template <typename T>
void	PmergeMe::mergeSort(T &content)
{
	mergeSortHelper(content, 0, content.size() - 1);
}

template <typename T>
void	PmergeMe::mergeSortHelper(T &content, int left, int right)
{
	if (left < right)
	{
		int	mid = left + (right - left) / 2;
		mergeSortHelper(content, left, mid);
		mergeSortHelper(content, mid + 1, right);
		merge(content, left, mid, right);
	}
}

template <typename T>
void	PmergeMe::merge(T &content, int left, int mid, int right)
{
	T	leftArr(content.begin() + left, content.begin() + mid + 1);
	T	rightArr(content.begin() + mid + 1, content.begin() + right + 1);

	typename T::const_iterator	leftIt = leftArr.begin();
	typename T::const_iterator	rightIt = rightArr.begin();
	typename T::iterator	contentIt = content.begin() + left;

	while (leftIt != leftArr.end() && rightIt != rightArr.end())
	{
		if (*leftIt <= *rightIt)
		{
			*contentIt = *leftIt;
			++leftIt;
		}
		else
		{
			*contentIt = *rightIt;
			++rightIt;
		}
		++contentIt;
	}
	for ( ; leftIt != leftArr.end(); ++leftIt)
	{
		*contentIt = *leftIt;
		++contentIt;
	}
	for ( ; rightIt != rightArr.end(); ++rightIt)
	{
		*contentIt = *rightIt;
		++contentIt;
	}
}

int	PmergeMe::jacobsthalst(int n)
{
	if (n == 0)
		return (n);
	if (n == 1)
		return (n);
	else
		return ((jacobsthalst(n - 1)) + 2 * jacobsthalst(n - 2));
}


/*
	Fonction Jacobsthal(n) :
    Si n == 0 :
        Retourner 0
    Sinon si n == 1 :
        Retourner 1
    Sinon :
        Retourner Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2)

	Fonction IndexSort(tableau) :
    Créer un tableau vide indexPairs
    Créer un tableau vide indexOdds

    Pour chaque valeur dans le tableau :
        Si valeur est pair :
            Ajouter (valeur, Jacobsthal(valeur)) à indexPairs
        Sinon :
            Ajouter (valeur, valeur) à indexOdds

    Trier indexPairs en utilisant le deuxième élément de chaque paire

    Créer un tableau vide resultat

    Pour chaque paire dans indexPairs :
        Ajouter premier élément de la paire à resultat

    Pour chaque paire dans indexOdds :
        Ajouter premier élément de la paire à resultat

    Retourner resultat

	Fonction Principale() :
    Lire le tableau de valeurs positives
    TriéTableau = IndexSort(tableau)
    Afficher TriéTableau
*/
