/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:54:35 by xli               #+#    #+#             */
/*   Updated: 2021/09/30 11:16:35 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int>	a;
	for (int i = 0; i < 100; i++)
		a.push_back(i);
	std::vector<int>::iterator	it = easyfind(a, 50);
	if (it != a.end())
		std::cout << *it << std::endl;
	else
		std::cerr << "Target cannot be found" << std::endl;
	it = easyfind(a, 100);
	if (it != a.end())
		std::cout << *it << std::endl;
	else
		std::cerr << "Target cannot be found" << std::endl;

	return (0);
}
