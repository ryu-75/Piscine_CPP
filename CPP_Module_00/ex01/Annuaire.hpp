#ifndef ANNUAIRE_HPP
#define ANNUAIRE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class Annuaire
{
	public:
		Annuaire();
		void	setRaw(void);
		void	launch();
		bool	setContact();
		void	getAnnuaire(void);
		void	searchContact(void);
		virtual	~Annuaire();
	private:
		Contact contacts	[8];
		int		amount;
};

#endif
