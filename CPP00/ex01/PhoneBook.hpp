/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:20:48 by xli               #+#    #+#             */
/*   Updated: 2021/09/01 13:20:50 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
