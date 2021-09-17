/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:05:48 by xli               #+#    #+#             */
/*   Updated: 2021/09/17 09:14:22 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name)
{
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::upGrade()
{
	if (_grade == 1)
	{
		std::cout << "Highest level reached" << std::endl;
		throw (Bureaucrat::GradeTooHighException());
	}
	_grade--;
	std::cout << "Current grade of " << getName() << ": " << getGrade() << std::endl;
}

void	Bureaucrat::downGrade()
{
	if (_grade == 150)
	{
		std::cout << "Lowest level reached" << std::endl;
		throw (Bureaucrat::GradeTooLowException());
	}
	_grade++;
	std::cout << "Current grade of " << getName() << ": " << getGrade() << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &srcs)
{
	os << srcs.getName() << " grade: " << srcs.getGrade();
	return (os);
}
