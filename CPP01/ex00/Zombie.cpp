/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:27:00 by xli               #+#    #+#             */
/*   Updated: 2021/09/03 11:47:17 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor
Zombie::Zombie(std::string name): _name(name) {}

//Destructor
Zombie::~Zombie()
{
	std::cout << "<" << _name << ">" << " is dead" << std::endl;
}

void	Zombie::announce()
{
	std::cout << "<" << _name << ">" << " Braiiiiiiinnnssss..." << std::endl;
}
