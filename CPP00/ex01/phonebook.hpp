#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook;

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();

	private:
		Contact	_contacts[8];
		int		ct;
		void	displayContactfull();
};

#endif
