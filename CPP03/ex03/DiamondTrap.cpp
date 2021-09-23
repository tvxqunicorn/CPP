/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:45:03 by xli               #+#    #+#             */
/*   Updated: 2021/09/23 10:09:02 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "Default constructor from DiamondTrap called" << std::endl;
	_name = "Big Boss";
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage= FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "String constructor from DiamondTrap called" << std::endl;
	_name = name;
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage= FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor from DiamondTrap called" << std::endl;
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

DiamondTrap::~DiamondTrap()
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

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is : " << _name << std::endl;
	std::cout << "My ClapTrap name is    : " << ClapTrap::_name + "_clap_name" << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
