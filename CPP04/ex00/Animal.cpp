/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:28:52 by xli               #+#    #+#             */
/*   Updated: 2021/09/14 09:34:49 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

Animal::Animal()
{
	std::cout << "Default constructor from Animal called" << std::endl;
}

Animal::Animal(const Animal &copy) : _type(copy._type)
{
	std::cout << "Copy constructor from Animal called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

Animal::~Animal()
{
	std::cout << "Default destructor from Animal called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

Animal	&Animal::operator=(const Animal &copy)
{
	if (this == &copy)
		return (*this);
	_type = copy._type;
	return (*this);
}
