/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:59:18 by xli               #+#    #+#             */
/*   Updated: 2021/10/06 15:19:16 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "Default constructor from WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "Copy constructor from WrongCat called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "Default destructor from WrongCat called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "Assignation operator from WrongCat called" << std::endl;
	if (this == &copy)
		return (*this);
	_type = copy.getType();
	return (*this);
}

/*
** -------------------- MEMBER FUNCTION --------------------
*/

void	WrongCat::makeSound()
{
	std::cout << "Cocorico cocorico!" << std::endl;
}

