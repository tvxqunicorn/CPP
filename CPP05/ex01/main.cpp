/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:08:32 by xli               #+#    #+#             */
/*   Updated: 2021/09/20 10:21:07 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

/*
** -------------------- CONSTRUCTOR EXCEPTIONS --------------------
*/

	try
	{
		Bureaucrat	Joe("Joe", 2);
		Bureaucrat	Jane("Jane", 1);
		Bureaucrat	Bob("Bob", 1);
		Form		FormA("Form A", 1, 1);

		//std::cout << FormA << std::endl;
		Joe.signForm(FormA);
		Jane.signForm(FormA);
		Bob.signForm(FormA);
		//std::cout << FormA << std::endl;
		//std::cout << Jane << "; " << Joe << std::endl;
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
		Bureaucrat	Poppy("Poppy", 10);
		Form		FormB("FormB", 9, 1);

		Poppy.signForm(FormB);
		std::cout << "Incrementing... " << std::endl;
		Poppy.upGrade();
		Poppy.signForm(FormB);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	Zoe("Zoe", 9);
		Form		FormC("FormC", 9, 1);

		std::cout << "Decrementing... " << std::endl;
		Zoe.downGrade();
		Zoe.signForm(FormC);
	}
	catch(std::exception& e)
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
		Form		FormD("FormD", 10, 1);

		Michelle.signForm(FormD);
		Michelle = Timmy;
		Michelle.signForm(FormD);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
