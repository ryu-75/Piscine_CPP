/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:18:02 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/03 20:38:54 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int destination, int weight) : _destination(destination), _weight(weight)
{
	std::cout << "Overload constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &lhs)
{
	this->_destination = lhs._destination;
	this->_weight = lhs._weight;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe &copy)
{
	if (this != &copy)
	{
		this->_destination = copy._destination;
		this->_weight = copy._weight;
		return (*this);
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
	std::cout << "Destructor called" << std::endl;
}

const char*	PmergeMe::ExceptionNegVal::what() const
{
	return (_message.c_str());
}

void	PmergeMe::parseValue(char **av, int ac)
{
	int	res = 0;
	for (int i = 1; i <= ac; i++)
	{
		if (av[i] && isdigit(*av[i]) && *av[i] != '-')
		{
			res = atoi(av[i]);
			this->_stackValue.push_back(res);	
		}
		else if (*av[i] == '-' && isdigit(*av[i]))
			throw ExceptionNegVal("🔺  Error: Number format should be positive");
	}
}

void	PmergeMe::displayUnsorted(void) const
{
	if (this->_stackValue.size() == 0)
		throw ExceptionNegVal("🔺  Error: Stack is empty");
	for (size_t i = 0; i < this->_stackValue.size(); i++)
	{
		std::cout << this->_stackValue[i] << ' ';
		if (i == this->_stackValue.size() - 1)
			std::cout << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &flux, const PmergeMe &input)
{
	flux << "Before: ";
	input.displayUnsorted();
	flux << "After: ";
	return (flux);
}

// pseudo code
/*
# ADD ALL VALUES IN EDGE CONTAINER : 
	FOR i = 0; i < EDGECOUNT; i++ 
THEN
	vector(EDGECOUNT[i].source) = argv[i];
	vector(EDGECOUNT[i].weight) = argv[i];	
	vector(EDGECOUNT[i].destination) = argv[i];

(note) ---> edgesCount = ac
(note) ---> node = edgesCount
(note) ---> std::vector<Edge> edges(edgesCount) 

# BELLMAN-FORD ALGORITHM
	FOR i = 0; i < node; i++
THEN
	if(bellmanFord(distance, edges, nodes, 0) == 0)
		throw exception("Graph contain a cycle of negative weights");
	RETURN (0);

bool bellmanFord(std::vector<int>& distances, const std::vector<Edge>& edges, int nodes, int source) {
    distances.assign(nodes, INF);
    distances[source] = 0;

    for (int i = 0; i < nodes - 1; ++i) {
        for (const Edge& edge : edges) {
            if (distances[edge.source] + edge.weight < distances[edge.destination]) {
                distances[edge.destination] = distances[edge.source] + edge.weight;
            }
        }
    }
    for (const Edge& edge : edges) {
        if (distances[edge.source] + edge.weight < distances[edge.destination]) {
            return false; // Cycle de poids négatif détecté
        }
    }
    return true;
}

# DJIKSTRA ALGORITHM
	FOR i = 0; i < node; i++
THEN
	DISPLAY SORTED VALUE
		Ex  : 3 7 4 6
		Res : 3 4 6 7

void dijkstra(std::vector<int>& distances, const std::vector<Edge>& edges, int nodes, int source) {
    distances.assign(nodes, INF);
    distances[source] = 0;
    std::vector<bool> visited(nodes, false);

    for (int i = 0; i < nodes - 1; ++i) {
        int minDistance = INF;
        int u = -1;
        for (int j = 0; j < nodes; ++j) {
            if (!visited[j] && distances[j] < minDistance) {
                minDistance = distances[j];
                u = j;
            }
        }
        if (u == -1) break;
        visited[u] = true;
        for (const Edge& edge : edges) {
            if (edge.source == u && distances[u] + edge.weight < distances[edge.destination]) {
                distances[edge.destination] = distances[u] + edge.weight;
            }
        }
    }
}
*/