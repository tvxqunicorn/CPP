/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:56:09 by xli               #+#    #+#             */
/*   Updated: 2021/09/14 10:56:51 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor from WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type)
{
	std::cout << "Copy constructor from WrongAnimal called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default destructor from WrongAnimal called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this == &copy)
		return (*this);
	_type = copy._type;
	return (*this);
}

/*
** -------------------- MEMBER FUNCTIONS --------------------
*/

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void		WrongAnimal::setType(std::string type)
{
	_type = type;
}

void		WrongAnimal::makeSound()
{
	std::cout << "Hi, I'm a Wrong Animal" << std::endl;
}
