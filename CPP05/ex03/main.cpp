/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:08:32 by xli               #+#    #+#             */
/*   Updated: 2021/09/21 11:33:11 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("shrubbery", "Form A");
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	rrf = someRandomIntern.makeForm("robotomy", "Form B");
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	rrf = someRandomIntern.makeForm("presidential", "Form C");
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	rrf = someRandomIntern.makeForm("Form D", "Form D");
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}

	return (0);
}
