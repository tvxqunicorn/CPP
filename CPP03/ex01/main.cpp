/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:45:24 by xli               #+#    #+#             */
/*   Updated: 2021/09/22 15:30:31 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	scavTrap1;
	ScavTrap	scavTrap2("Pop");
	ScavTrap	scavTrap3(scavTrap2);

	scavTrap1.attack("Michelle");
	scavTrap1 = scavTrap3;
	scavTrap1.attack("Timmy");
	scavTrap1.takeDamage(120);
	scavTrap1.beRepaired(100);
	scavTrap1.guardGate();

	return (0);
}
