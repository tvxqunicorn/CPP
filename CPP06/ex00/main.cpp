/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:37:04 by xli               #+#    #+#             */
/*   Updated: 2021/10/11 15:45:05 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

double	toConvert(char *str) //from str to double (double can store int, but not verse vesa)
{
	bool	isNegetive = false;
	bool	isNumeric = true;
	bool	isPoint = false;
	bool	isFloat = false;

	//parsing
	for (int i = 0; str[i]; i++)
	{
		if (i == 0 && str[i] == '-')
			isNegetive = true;
		else if (!isdigit(str[0]))
			isNumeric = false;
		else if (str[i] == '.')
			isPoint = true;
		else if (i == (int)strlen(str) - 1 && str[i] == 'f')
			isFloat = true;
	}
	//char
	if (isNumeric == false && strlen(str) == 1)
		return (static_cast<double>(str[0]));
	//int
	if (isNumeric == true && isPoint == false && isFloat == false)
		return (static_cast<double>(atoi(str)));
	//float
	if (isNumeric == true && isPoint == true && isFloat == true)
		return (static_cast<double>(atof(str)));
	//double
	if (isNumeric == true && isPoint == true && isFloat == false)
		return (static_cast<double>(atof(str)));
	//impossible for everyone
	else
	{
		std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl
			<< "float: impossible" << std::endl
			<< "double: impossible" << std::endl;
		exit(1);
	}
}

void	toOutput(double input) //from double to char, int, float and double
{
	//char
	if (isprint(static_cast<char>(input))) //ascii and printable eg. 50
		std::cout << "char: \'" << static_cast<char>(input) << "\'"<< std::endl;
	else if (isascii(static_cast<char>(input))) //ascii non-printable eg. 31
		std::cout << "char: non displayable" << std::endl;
	else //non-ascii eg. 500
		std::cout << "char: impossible" << std::endl;
	//int
	std::cout << "int: " << static_cast<int>(input) << std::endl;
	//float
	std::cout << "float: " << static_cast<float>(input) << ".0f" << std::endl;
	//double
	std::cout << "double: " << static_cast<double>(input) << ".0" << std::endl;
}

void	exceptions(std::string const &str)
{
	std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl
			<< "float: " << str << "f" << std::endl
			<< "double: " << str << std::endl;
	exit(0);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./convert + one arguement" << std::endl;
		return (1);
	}
	if (strcmp(av[1], "nan") == 0 || strcmp(av[1], "nanf") == 0)
		exceptions("nan");
	if (strcmp(av[1], "+inf") == 0 || strcmp(av[1], "+inff") == 0)
		exceptions("+inf");
	if (strcmp(av[1], "-inf") == 0 || strcmp(av[1], "-inff") == 0)
		exceptions("-inf");
	toOutput(toConvert(av[1]));
	return (0);
}
