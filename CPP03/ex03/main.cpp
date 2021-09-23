/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:45:24 by xli               #+#    #+#             */
/*   Updated: 2021/09/23 09:51:03 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	diamondTrap1;
	DiamondTrap	diamondTrap2("Billi");
	DiamondTrap	diamondTrap3(diamondTrap2);

	diamondTrap1.attack("Carmen");
	diamondTrap1 = diamondTrap3;
	diamondTrap1.attack("Harper");
	diamondTrap1.takeDamage(12);
	diamondTrap1.beRepaired(100);
	diamondTrap1.whoAmI();

	return (0);
}
