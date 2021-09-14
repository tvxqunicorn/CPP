/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:35:35 by xli               #+#    #+#             */
/*   Updated: 2021/09/14 12:04:30 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

Brain::Brain()
{
	std::cout << "Default constructor from Brain called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Copy constructor from Brain called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

Brain::~Brain()
{
	std::cout << "Default destructor from Brain called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

Brain	&Brain::operator=(const Brain &copy)
{
	std::cout << "Assignation operator from Brain called" << std::endl;
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	return (*this);
}
