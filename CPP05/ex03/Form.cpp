/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 13:54:21 by xli               #+#    #+#             */
/*   Updated: 2021/10/01 14:49:59 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int signGrade, const int execGrade) :
	_name(name),
	_isSigned(false),
	_signGrade(signGrade),
	_execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw (GrandTooHighException());
	if (signGrade > 150 || execGrade > 150)
		throw (GrandTooLowException());
}

Form::Form(const Form &copy) :
	_name(copy._name),
	_isSigned(copy._isSigned),
	_signGrade(copy._signGrade),
	_execGrade(copy._execGrade) {}

Form::~Form() {}

Form	&Form::operator=(const Form &copy)
{
	if (this == &copy)
		return (*this);
	_isSigned = copy._isSigned;
	return (*this);
}

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getSigned() const
{
	return (_isSigned);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

void	Form::beSigned(Bureaucrat &bureau)
{
	if (getSigned())
		return ;
	if (bureau.getGrade() > _signGrade)
	{
		throw (GrandTooLowException());
	}
	_isSigned = true;
}

void	Form::excute(Bureaucrat const &executor) const
{
	if (_isSigned == false)
		throw (FormNotSigned());
	if (executor.getGrade() > _execGrade)
	{
		throw (GrandTooLowException());
	}
	action();
}

std::ostream &operator<<(std::ostream &os, const Form &srcs)
{
	os << srcs.getName() << " grade to sign: " << srcs.getSignGrade()
		<< " grade to execute: " << srcs.getExecGrade();
	return (os);
}
