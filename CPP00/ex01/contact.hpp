#ifndef	CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact;

class Contact
{
	public:
		Contact();
		virtual ~Contact();
		
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;

		void	limitwidth(std::string str, int width);
		void	setContact();
		void	getContact() const;
		void	getContactindex();
};

#endif
