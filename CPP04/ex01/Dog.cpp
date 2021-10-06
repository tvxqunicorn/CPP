/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:42:48 by xli               #+#    #+#             */
/*   Updated: 2021/10/06 15:26:16 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

Dog::Dog() : Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Default constructor from Dog called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) //DEEP COPY
{
	_brain = new Brain();
	*this = copy;
	std::cout << "Copy constructor from Dog called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

Dog::~Dog()
{
	delete _brain;
	std::cout << "Default destructor from Dog called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

Dog	&Dog::operator=(const Dog &copy) //DEEP COPY
{
	std::cout << "Assignation operator from Dog called" << std::endl;
	if (this == &copy)
		return (*this);
	_type = copy._type;
	*_brain = *copy._brain;
	return (*this);
}

/*
** -------------------- MEMBER FUNCTION --------------------
*/

void	Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

void	Dog::haveIdeas() const
{
	std::cout << "I want bones" << std::endl;
}
