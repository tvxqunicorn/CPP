/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:45:24 by xli               #+#    #+#             */
/*   Updated: 2021/09/13 18:02:28 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap	scavTrap1;
	ScavTrap	scavTrap2("Pop");
	ScavTrap	scavTrap3(scavTrap2);

	scavTrap1.attack("Michelle");
	scavTrap1 = scavTrap3;
	scavTrap1.attack("Timmy");
	scavTrap1.takeDamage(12); //why not dead?
	scavTrap1.beRepaired(100); //why not full?
	scavTrap1.guardGate();

	return (0);
}
