/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:33:01 by xli               #+#    #+#             */
/*   Updated: 2021/10/05 08:42:58 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

ClapTrap::ClapTrap() :
	_name("John"),
	_hitpoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Default constructor from ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitpoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "String constructor from ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) :
	_name(copy._name),
	_hitpoints(copy._hitpoints),
	_energyPoints(copy._energyPoints),
	_attackDamage(copy._attackDamage)
{
	std::cout << "Copy constructor from ClapTrap called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor from ClapTrap called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Assignation operator from ClapTrap called" << std::endl;
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

void	ClapTrap::attack(std::string const &target)
{
	std::cout << _name << " attack " << target << ", causing "
			<< _hitpoints << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
	if (_energyPoints <= amount)
	{
		std::cout << _name << " is dead" << std::endl;
		_energyPoints = 0;
	}
	else
		_energyPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << _name << " has been repaired of " << amount << " points" << std::endl;
	_energyPoints += amount;
	if (_energyPoints >= 100)
	{
		std::cout << _name << " is fully repaired" << std::endl;
		_energyPoints = 100;
	}
}
