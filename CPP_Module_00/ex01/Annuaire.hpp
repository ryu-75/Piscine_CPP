/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlorion <nlorion@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:54:21 by nlorion           #+#    #+#             */
/*   Updated: 2023/05/17 12:54:22 by nlorion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_HPP
#define ANNUAIRE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"
class Annuaire
{
	public:
		Annuaire();
		void	setRaw(void);
		void	launch();
		bool	setContact();
		void	getAnnuaire(void);
		bool	searchContact(void);
		~Annuaire();
	private:
		Contact m_contacts	[8];
		int		m_amount;
		static int	m_i;
};

#endif
