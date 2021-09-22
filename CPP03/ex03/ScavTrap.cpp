/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:32:06 by xli               #+#    #+#             */
/*   Updated: 2021/09/22 15:14:53 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default constructor from ScavTrap called" << std::endl;
	_name = "Jean";
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "String constructor from ScavTrap called" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor from ScavTrap called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor from ScavTrap called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Assignation operator from ScavTrap called" << std::endl;
	if (this == &copy)
		return (*this);
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return (*this);
}

/*
** -------------------- MEMBER FUNCTIONS --------------------
*/

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
