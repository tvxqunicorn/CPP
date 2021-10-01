/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:06:35 by xli               #+#    #+#             */
/*   Updated: 2021/10/01 17:29:42 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
