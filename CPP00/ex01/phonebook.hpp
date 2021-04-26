#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void	addContact();
		void	searchContact();

	private:
		Contact	contacts[8];
		int		ct;
		void	displayContactfull();
};

#endif
