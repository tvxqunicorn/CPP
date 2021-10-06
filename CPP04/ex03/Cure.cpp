/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:58:15 by xli               #+#    #+#             */
/*   Updated: 2021/10/06 15:00:44 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &copy) : AMateria(copy) {}

Cure::~Cure() {}

Cure	&Cure::operator=(const Cure &copy)
{
	if (this == &copy)
		return (*this);
	_type = copy._type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	AMateria	*cure = new Cure();

	return (cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "Cure: \"* heals " << target.getName() << "'s wounds *\"" << std::endl;
}
