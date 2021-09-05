/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:46:55 by xli               #+#    #+#             */
/*   Updated: 2021/09/05 15:45:19 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	std::string		file;
	std::string		s1;
	std::string		s2;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (ac != 4)
	{
		std::cerr << "Error: Invalid numbers of arguments" << std::endl;
		return (1);
	}
	file = av[1];
	s1 = av[2];
	s2 = av[3];
	if (s1.empty() == 0 || s2.empty() == 0)
	{
		std::cerr << "Error: Empty strings" << std::endl;
		return (1);
	}
	return (0);
}
