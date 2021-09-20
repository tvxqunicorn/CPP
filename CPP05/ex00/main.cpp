/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:08:32 by xli               #+#    #+#             */
/*   Updated: 2021/09/20 13:56:19 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

/*
** -------------------- CONSTRUCTOR EXCEPTIONS --------------------
*/

	try
	{
		Bureaucrat Jane("Jane", 0);

		std::cout << Jane << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Joe("Joe", 151);

		std::cout << Joe << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

/*
** -------------------- GRADE CHANGING EXCEPTIONS --------------------
*/

	try
	{
		Bureaucrat	Poppy("Poppy", 150);

		std::cout << Poppy << std::endl;
		std::cout << "Decrementing... " << std::endl;
		Poppy.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	Zoe("Zoe", 1);

		std::cout << Zoe << std::endl;
		std::cout << "Incrementing... " << std::endl;
		Zoe.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

/*
** -------------------- COPY --------------------
*/

	try
	{
		Bureaucrat	Timmy("Timmy", 10);
		Bureaucrat	Michelle("Michelle", 20);

		std::cout << Timmy << "; " << Michelle << std::endl;
		Michelle = Timmy;
		std::cout << "Copying... " << std::endl;
		std::cout << Timmy << "; " <<Michelle << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
