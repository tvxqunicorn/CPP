/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:23:32 by xli               #+#    #+#             */
/*   Updated: 2021/09/22 16:18:43 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default constructor from FragTrap called" << std::endl;
	_name = "Alex";
	_hitpoints = 100;
	//_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "String constructor from FragTrap called" << std::endl;
	_name = name;
	_hitpoints = 100;
	//_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor from FragTrap called" << std::endl;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "Destructor from FragTrap called" << std::endl;
}

/*
** -------------------- OVERLOADING --------------------
*/

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Assignation operator from FragTrap called" << std::endl;
	if (this == &copy)
		return (*this);
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return (*this);
}

/*
** -------------------- MEMBER FUNCTION --------------------
*/

void	FragTrap::highFivesGuys()
{
	std::cout << "Give me high fives, guys!" << std::endl;
}
