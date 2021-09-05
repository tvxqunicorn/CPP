/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:56:55 by xli               #+#    #+#             */
/*   Updated: 2021/09/03 16:39:06 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon() {}

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string Weapon::getType() const
{
	return (_type);
}
