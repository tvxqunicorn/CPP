/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:27:15 by xli               #+#    #+#             */
/*   Updated: 2021/09/23 09:17:42 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(target, 72, 45), _target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	srand(time(NULL));
	_target = copy._target;
	return (*this);
}

void	RobotomyRequestForm::action() const
{
	std::cout << "*DRILLING NOISE*" << std::endl;
	if (rand() % 2)
		std::cout << getName() << "has been robotomized successfully" << std::endl;
	else
		std::cout << getName() << "robotomization failed" << std::endl;
}
