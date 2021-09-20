/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:08:32 by xli               #+#    #+#             */
/*   Updated: 2021/09/20 16:39:04 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

	std::cout << "------------ Shrubbery Creation Form ------------" << std::endl;

	try
	{
		Bureaucrat				Jane("Joe", 10);
		ShrubberyCreationForm	FormA("Form A");

		std::cout << Jane << std::endl;
		std::cout << FormA << std::endl;
		Jane.executeForm(FormA);
		Jane.signForm(FormA);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat				Joe("Joe", 140);
		ShrubberyCreationForm	FormB("Form B");

		std::cout << Joe << std::endl;
		std::cout << FormB << std::endl;
		Joe.signForm(FormB);
		Joe.executeForm(FormB);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat				Jane("Joe", 137);
		ShrubberyCreationForm	FormC("Form C");

		std::cout << Jane << std::endl;
		std::cout << FormC << std::endl;
		Jane.signForm(FormC);
		Jane.executeForm(FormC);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------------ Robotomy Request Form ------------" << std::endl;

	try
	{
		Bureaucrat			Mike("Mike", 10);
		RobotomyRequestForm	FormD("Form D");

		std::cout << Mike << std::endl;
		std::cout << FormD << std::endl;
		Mike.signForm(FormD);
		Mike.executeForm(FormD);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------------ Presidential Pardon Form ------------" << std::endl;

	try
	{
		Bureaucrat				Michelle("Michelle", 1);
		PresidentialPardonForm	FormE("Form E");

		std::cout << Michelle << std::endl;
		std::cout << FormE << std::endl;
		Michelle.signForm(FormE);
		Michelle.executeForm(FormE);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
