#include "contact.hpp"

void	Contact::setContact()
{
	std::cout << "Please enter contact info:" << std::endl;
	std::cout << "   First name: ";
	std::cin >> this->first_name;
	std::cout << "   Last name: ";
	std::cin >> this->last_name;
	std::cout << "   Nickname: ";
	std::cin >> this->nickname;
	std::cout << "   Login: ";
	std::cin >> this->login;
	std::cout << "   Postal address: ";
	std::cin >> this->postal_address;
	std::cout << "   Email address: ";
	std::cin >> this->email_address;
	std::cout << "   Phone number: ";
	std::cin >> this->phone_number;
	std::cout << "   Birthday date: ";
	std::cin >> this->birthday_date;
	std::cout << "   Favorite meal: ";
	std::cin >> this->favorite_meal;
	std::cout << "   Underwear color: ";
	std::cin >> this->underwear_color;
	std::cout << "   Darkest secret: ";
	std::cin >> this->darkest_secret;
	std::cout << "   New contact added." << std::endl;
}

void	Contact::getContact() const
{
	std::cout << "   First name: " << this->first_name << std::endl;
	std::cout << "   Last name: " << this->last_name << std::endl;
	std::cout << "   Nickname: " << this->nickname << std::endl;
	std::cout << "   Login: " << this->login << std::endl;
	std::cout << "   Postal address: " << this->postal_address << std::endl;
	std::cout << "   Email address: " << this->email_address << std::endl;
	std::cout << "   Phone number: " << this->phone_number << std::endl;
	std::cout << "   Birthday date: " << this->birthday_date << std::endl;
	std::cout << "   Favorite meal: " << this->favorite_meal << std::endl;
	std::cout << "   Underwear color: " << this->underwear_color << std::endl;
	std::cout << "   Darkest secret: " << this->darkest_secret << std::endl;
}

void	Contact::limitwidth(std::string str, int width)
{
	std::cout << '|';
	if((int)str.size() > width)
		std::cout << str.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << str;
}

void	Contact::getContactindex()
{
	limitwidth(this->first_name, 10);
	limitwidth(this->last_name, 10);
	limitwidth(this->nickname, 10);
}
