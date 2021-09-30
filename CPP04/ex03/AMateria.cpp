/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:37:33 by xli               #+#    #+#             */
/*   Updated: 2021/09/30 15:56:02 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria() {}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	if (this == &copy)
		return (*this);
	_type = copy._type;
	return (*this);
}

std::string	const &AMateria::getType() const
{
	return (_type);
}
void	AMateria::use(ICharacter &target)
{
	(void)target;
}
