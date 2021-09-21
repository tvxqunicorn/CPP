/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 09:48:40 by xli               #+#    #+#             */
/*   Updated: 2021/09/21 11:32:39 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern::~Intern() {}

Intern	&Intern::operator=(const Intern &copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	int			i = 0;
	Form		*F = NULL;
	std::string	type[3] = {"shrubbery", "robotomy", "presidential"};

	for (i = 0; i < 4; i++)
	{
		if (name == type[i])
			break;
	}
	switch (i)
	{
	case 0:
		F = new ShrubberyCreationForm(target);
		break;
	case 1:
		F = new RobotomyRequestForm(target);
		break;
	case 2:
		F = new PresidentialPardonForm(target);
		break;
	default:
		std::cout << "Error: form doesn't exsit" << std::endl;
		return NULL;
		break;
	}
	std::cout << "Intern creates " << F->getName() << std::endl;
	return (F);
}
