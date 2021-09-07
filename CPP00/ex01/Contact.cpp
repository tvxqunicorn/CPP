/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:20:08 by xli               #+#    #+#             */
/*   Updated: 2021/09/07 15:20:50 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void	Contact::setContact()
{
	std::cout << "Please enter contact info:" << std::endl;
	std::cout << "   First name: ";
	std::cin >> this->_first_name;
	std::cout << "   Last name: ";
	std::cin >> this->_last_name;
	std::cout << "   Nickname: ";
	std::cin >> this->_nickname;
	std::cout << "   Phone number: ";
	std::cin >> this->_phone_number;
	std::cout << "   Darkest secret: ";
	std::cin >> this->_darkest_secret;
	std::cout << "New contact added." << std::endl;
}

void	Contact::getContact() const
{
	std::cout << "   First name: " << this->_first_name << std::endl;
	std::cout << "   Last name: " << this->_last_name << std::endl;
	std::cout << "   Nickname: " << this->_nickname << std::endl;
	std::cout << "   Phone number: " << this->_phone_number << std::endl;
	std::cout << "   Darkest secret: " << this->_darkest_secret << std::endl;
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
	limitwidth(this->_first_name, 10);
	limitwidth(this->_last_name, 10);
	limitwidth(this->_nickname, 10);
}
