#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->ct = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact()
{
	if (ct == 8)
		std::cout << "PhoneBook is full" << std::endl;
	else
	{
		Contact	newContact;
		newContact.setContact();
		this->_contacts[ct] = newContact;
		ct++;
	}
}

void	PhoneBook::displayContactfull()
{
	int	index;

	std::cout << "Enter index of contact" << std::endl;
	std::cin >> index;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	if (index <= 0 || index > this->ct)
		std::cout << "Index out of range" << std::endl;
	else
		this->_contacts[index - 1].getContact();
}

void	PhoneBook::searchContact()
{
	if (this->ct == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	std::cout << '|' << std::setw(10) << std::right << "Index";
	std::cout << '|' << std::setw(10) << std::right << "First name";
	std::cout << '|' << std::setw(10) << std::right << "Last name";
	std::cout << '|' << std::setw(10) << std::right << "Nickname";
	std::cout << '|' << std::endl;
	int index = 0;
	while (index < this->ct)
	{
		std::cout << '|' << std::setw(10) << std::right << index + 1;
		_contacts[index].getContactindex();
		std::cout << '|' << std::endl;
		index++;
	}
	this->displayContactfull();
}
