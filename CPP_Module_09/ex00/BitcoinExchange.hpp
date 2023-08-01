/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:19:48 by nlorion           #+#    #+#             */
/*   Updated: 2023/08/01 12:50:25 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <map>
#include <iostream>
#include <algorithm>
#include <fstream>

class	Btc
{
	public :

		typedef std::map<std::string, float>::iterator	map_iterator;

		Btc();
		Btc(std::string inputName);
		Btc(const Btc &copy);
		~Btc();
		
		Btc&	operator=(const Btc &rhs);
		
		void	parseFiles(void);
		void	parsInput(std::string str);
		void	doExchange(std::string line);
		bool	checkContent(std::string file) const;
		bool	parsValue(std::string value);
		
		Btc::map_iterator	nearestKey(std::string& key);
		class	ExceptionBtc
		{
			public:
					ExceptionBtc(const std::string &message) : _message(message) {}
			const char*	what() const;
			private:
				const std::string	_message;
		};
		
	private :
		std::map<std::string, float>	_btcMap;
		std::string	_inputName;
};

#endif // ******************** BITCOIN_EXCHANGE_HPP ********************
	