/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:06:05 by xli               #+#    #+#             */
/*   Updated: 2021/09/03 15:09:41 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;

	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Zombie *zombie = new Zombie(name);
		horde[i] = *zombie;
	}
	return (horde);
}
