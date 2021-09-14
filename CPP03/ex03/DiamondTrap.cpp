/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:45:03 by xli               #+#    #+#             */
/*   Updated: 2021/09/14 09:17:35 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default constructor from DiamondTrap called" << std::endl;
	_name = "Big Boss";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(_name += "_clap_name")
{
	std::cout << "String constructor from DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) :ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "Copy constructor from DiamondTrap called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

DiamondTrap::DiamondTrap()
{
	std::cout << "Destructor from DiamondTrap called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "Assignation operator from DiamondTrap called" << std::endl;
	if (this == &copy)
		return (*this);
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return (*this);
}

/*
** ---------------- MEMBER FUCNCTIONS ----------------
*/

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My DiamondTrap name is : " << _name << std::endl;
    std::cout << "My ClapTrap name is    : " << ClapTrap::_name << std::endl;
}
