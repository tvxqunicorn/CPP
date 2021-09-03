/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:06:35 by xli               #+#    #+#             */
/*   Updated: 2021/09/03 15:10:22 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int main()
{
	int	N = 10;

	Zombie *zombie = zombieHorde(N, "Bob");
	if (zombie == NULL)
		return (EXIT_FAILURE);
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete[] zombie;
	return (EXIT_SUCCESS);
}
