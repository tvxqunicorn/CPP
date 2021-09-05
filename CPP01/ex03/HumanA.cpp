/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:26:54 by xli               #+#    #+#             */
/*   Updated: 2021/09/03 16:41:30 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << _name << "attacks with his" << _weapon.getType() << std::endl;
}
