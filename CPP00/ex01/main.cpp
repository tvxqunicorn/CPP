/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:20:25 by xli               #+#    #+#             */
/*   Updated: 2021/09/01 13:20:26 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string	cmd;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "Enter command(ADD/SEARCH/EXIT): " << std::endl;
		if (!(std::cin >> cmd))
			break ;
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
