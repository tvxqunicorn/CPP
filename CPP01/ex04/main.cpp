/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:46:55 by xli               #+#    #+#             */
/*   Updated: 2021/10/02 15:35:00 by xli              ###   ########lyon.fr   */
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
	if (s1.size() == 0 || s2.size() == 0)
	{
		std::cerr << "Error: Empty strings" << std::endl;
		return (1);
	}
	infile.open(file, std::ios::in);
	if (!infile)
	{
		std::cerr << "Error: cannot open infile" << std::endl;
		return (1);
	}
	outfile.open((file + ".replace"), std::ios::out | std::ios::trunc);
	if (!outfile)
	{
		std::cerr << "Error: cannot open outfile" << std::endl;
		return (1);
	}
	int	len1 = s1.size();
	int	len2 = s2.size();
	char		c;
	std::string	res;
	while (infile.get(c))
		res.push_back(c);
	std::size_t pos;
	std::size_t start_pos = 0;
	while ((pos = res.find(s1, start_pos)) != std::string::npos)
	{
		res.erase(pos, len1);
		res.insert(pos, s2);
		start_pos = pos + len2;
	}
	outfile << res;
	infile.close();
	outfile.close();
	return (0);
}
