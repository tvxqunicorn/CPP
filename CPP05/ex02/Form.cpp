/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 13:54:21 by xli               #+#    #+#             */
/*   Updated: 2021/09/20 11:39:25 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Form::Form() {} //???

Form::Form(const std::string name, const int signGrade, const int execGrade) :
	_name(name), //???
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
	_name(copy._name), //???
	_isSigned(copy._isSigned),
	_signGrade(copy._signGrade),
	_execGrade(copy._execGrade)
{
	if (copy._signGrade < 1 || copy._execGrade < 1)
		throw (GrandTooHighException());
	if (copy._signGrade > 150 || copy._execGrade > 150)
		throw (GrandTooLowException());
}

Form::~Form() {}

// Form	&Form::operator=(const Form &copy) //???
// {
// 	if (this == &copy)
// 		return (*this);
// 	if (copy._signGrade < 1 || copy._execGrade < 1)
// 		throw (GrandTooHighException());
// 	if (copy._signGrade > 150 || copy._execGrade > 150)
// 		throw (GrandTooLowException());
// 	_signGrade = copy._signGrade;
// 	_execGrade = copy._execGrade;
// 	return (*this);
// }

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
		throw (Bureaucrat::GradeTooLowException()); //why Bureaucrat?
	}
	_isSigned = true;
}

void	Form::excute(Bureaucrat const &executor) const
{
	if (_isSigned == false)
		throw (FormNotSigned());
	if (executor.getGrade() > _execGrade)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
}

std::ostream &operator<<(std::ostream &os, const Form &srcs)
{
	os << srcs.getName() << " grade to sign: " << srcs.getSignGrade()
		<< " grade to execute: " << srcs.getExecGrade();
	return (os);
}
