/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:08:32 by xli               #+#    #+#             */
/*   Updated: 2021/09/17 09:24:42 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bob("Bob", 150);
		std::cout << Bob << std::endl;
		Bureaucrat Mike("Mike", 151);
		std::cout << Mike << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Timmy("Timmy", 1);
		std::cout << Timmy << std::endl;
		Bureaucrat Michelle("Michelle", 0);
		std::cout << Michelle << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat Poppy("Poppy", 150);
	std::cout << Poppy << std::endl;
	try
	{
		std::cout << "Decrementing... " << std::endl;
		Poppy.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat Zoe("Zoe", 1);
	std::cout << Zoe << std::endl;
	try
	{
		std::cout << "Incrementing... " << std::endl;
		Zoe.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
