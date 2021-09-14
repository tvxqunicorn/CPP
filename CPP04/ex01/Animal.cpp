/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:28:52 by xli               #+#    #+#             */
/*   Updated: 2021/09/14 12:21:19 by xli              ###   ########lyon.fr   */
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

Animal::Animal(const Animal &copy)
{
	*this = copy;
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
	std::cout << "Assignation operator from Animal called" << std::endl;
	if (this == &copy)
		return (*this);
	_type = copy._type;
	return (*this);
}

/*
** -------------------- MEMBER FUNCTIONS --------------------
*/

std::string	Animal::getType() const
{
	return (_type);
}

void		Animal::setType(std::string type)
{
	_type = type;
}

void		Animal::makeSound() const
{
	std::cout << "Hi I'm an Animal" << std::endl;
}

void		Animal::haveIdeas() const
{
	std::cout << "I want food" << std::endl;
}
