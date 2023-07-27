/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:19:48 by nlorion           #+#    #+#             */
/*   Updated: 2023/07/27 15:40:31 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <map>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

class	Btc
{
	public :
		Btc();
		~Btc();
	private :
		std::map<std::string, int>	_btcMap;
};

#endif // ******************** BITCOIN_EXCHANGE_HPP ********************
