/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:51:12 by xli               #+#    #+#             */
/*   Updated: 2021/09/30 16:43:46 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &copy) : AMateria(copy) {}

Ice::~Ice()	{}

Ice	&Ice::operator=(const Ice &copy)
{
	if (this == &copy)
		return (*this);
	_type = copy._type;
	return (*this);
}

AMateria	*Ice::clone() const
{
	AMateria	*ice = new Ice();

	return (ice);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}
