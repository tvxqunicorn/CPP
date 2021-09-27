/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:40:22 by xli               #+#    #+#             */
/*   Updated: 2021/09/23 09:17:48 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(target, 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	_target = copy._target;
	return (*this);
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream	outfile;

	outfile.open((getName() + "_shrubbery"), std::ios::out | std::ios::trunc);
	outfile <<
	"  888 \n"
	"  888 \n"
	"  888 \n"
	"88888888888d888 .d88b.  .d88b. \n"
	"  888   888P   d8P  Y8bd8P  Y8b \n"
	"  888   888    8888888888888888 \n"
	"  Y88b. 888    Y8b.    Y8b. \n"
	"    Y888888      Y8888   Y8888 \n" << std::endl;

	outfile.close();
	std::cout << "File created" << std::endl;
}
