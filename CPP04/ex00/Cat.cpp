/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:49:51 by xli               #+#    #+#             */
/*   Updated: 2021/10/06 15:18:35 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Default constructor from Cat called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Copy constructor from Cat called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

Cat::~Cat()
{
	std::cout << "Default destructor from Cat called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

Cat	&Cat::operator=(const Cat &copy)
{
	std::cout << "Assignation operator from Cat called" << std::endl;
	if (this == &copy)
		return (*this);
	_type = copy.getType();
	return (*this);
}

/*
** -------------------- MEMBER FUNCTION --------------------
*/

void	Cat::makeSound() const
{
	std::cout << "Meow meow!" << std::endl;
}

