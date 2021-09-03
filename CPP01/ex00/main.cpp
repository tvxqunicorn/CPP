/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:26:08 by xli               #+#    #+#             */
/*   Updated: 2021/09/03 11:44:48 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
	Zombie	zombieA("Bob");
	zombieA.announce();

	Zombie	*zombieB = newZombie("Jack");
	zombieB->announce();

	randomChump("Mike");

	delete zombieB;
	return (0);
}
