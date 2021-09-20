/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:08:32 by xli               #+#    #+#             */
/*   Updated: 2021/09/20 11:57:24 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

/*
** -------------------- CONSTRUCTOR EXCEPTIONS --------------------
*/

	try
	{
		Bureaucrat				Joe("Joe", 2);
		ShrubberyCreationForm	FormA("Office");

		Joe.executeForm(FormA);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

// /*
// ** -------------------- GRADE CHANGING EXCEPTIONS --------------------
// */
// 	try
// 	{
// 		Bureaucrat	Poppy("Poppy", 10);
// 		Form		FormB("FormB", 9, 1);

// 		Poppy.signForm(FormB);
// 		std::cout << "Incrementing... " << std::endl;
// 		Poppy.upGrade();
// 		Poppy.signForm(FormB);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		Bureaucrat	Zoe("Zoe", 9);
// 		Form		FormC("FormC", 9, 1);

// 		std::cout << "Decrementing... " << std::endl;
// 		Zoe.downGrade();
// 		Zoe.signForm(FormC);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// /*
// ** -------------------- COPY --------------------
// */
// 	try
// 	{
// 		Bureaucrat	Timmy("Timmy", 10);
// 		Bureaucrat	Michelle("Michelle", 20);
// 		Form		FormD("FormD", 10, 1);

// 		Michelle.signForm(FormD);
// 		Michelle = Timmy;
// 		Michelle.signForm(FormD);
// 	}
// 	catch(std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

	return (0);
}
