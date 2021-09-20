/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:05:48 by xli               #+#    #+#             */
/*   Updated: 2021/09/20 14:53:10 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	if (copy._grade < 1)
		throw (GradeTooHighException());
	if (copy._grade > 150)
		throw (GradeTooLowException());
	_grade = copy._grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this == &copy)
		return (*this);
	if (copy._grade < 1)
		throw (GradeTooHighException());
	if (copy._grade > 150)
		throw (GradeTooLowException());
	_grade = copy._grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	if (_grade < 1)
		throw (GradeTooHighException());
	if (_grade > 150)
		throw (GradeTooLowException());
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

void	Bureaucrat::signForm(Form &form)
{
	if (form.getSigned())
	{
		std::cout << getName() << " cannot sign " << form.getName()
				<< " because it's already been signed" << std::endl;
	}
	else if (getGrade() > form.getSignGrade())
	{
		std::cout << getName() << " cannot sign " << form.getName()
				<< " because his/her grade is too low" << std::endl;
		form.beSigned(*this);
	}
	else
	{
		std::cout << getName() << " signed " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &srcs)
{
	os << srcs.getName() << " grade: " << srcs.getGrade();
	return (os);
}
