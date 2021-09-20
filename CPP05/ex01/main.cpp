/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:08:32 by xli               #+#    #+#             */
/*   Updated: 2021/09/20 15:10:14 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "------------ Constructor Exceptions ------------" << std::endl;

	try
	{
		Bureaucrat	Joe("Joe", 2);
		Bureaucrat	Jane("Jane", 1);
		Form		FormA("Form A", 1, 1);

		std::cout << FormA << std::endl;
		std::cout << Jane << "; " << Joe << std::endl;
		Joe.signForm(FormA);
		Jane.signForm(FormA);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	Barbie("Barbie", 1);
		Form		FormB("Form B", 1, 1);

		std::cout << FormB << std::endl;
		std::cout << Bob << "; " << Barbie << std::endl;
		Bob.signForm(FormB);
		Barbie.signForm(FormB);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------------ Grand Changing Exceptions ------------" << std::endl;

	try
	{
		Bureaucrat	Poppy("Poppy", 10);
		Form		FormB("FormB", 9, 1);

		std::cout << FormB << std::endl;
		std::cout << Poppy << std::endl;
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

		std::cout << FormC << std::endl;
		std::cout << Zoe << std::endl;
		std::cout << "Decrementing... " << std::endl;
		Zoe.downGrade();
		Zoe.signForm(FormC);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------------ Copy ------------" << std::endl;

	try
	{
		Bureaucrat	Timmy("Timmy", 10);
		Bureaucrat	Michelle("Michelle", 20);
		Form		FormD("FormD", 9, 1);

		std::cout << FormD << std::endl;
		std::cout << Timmy << "; " << Michelle << std::endl;
		Michelle = Timmy;
		std::cout << "Copying... " << std::endl;
		std::cout << Timmy << "; " << Michelle << std::endl;
		Michelle.signForm(FormD);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
