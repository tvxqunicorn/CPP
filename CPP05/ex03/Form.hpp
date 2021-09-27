/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:33:53 by xli               #+#    #+#             */
/*   Updated: 2021/09/23 09:18:15 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;

	public:
		Form();
		Form(const std::string name, const int signGrade, const int execGrade);
		Form(const Form &copy);
		virtual ~Form();

		Form &operator=(const Form &copy);

		std::string		getName() const;
		bool			getSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		void			beSigned(Bureaucrat &b);
		void			excute(Bureaucrat const &executor) const;
		virtual void	action() const = 0;

		class GrandTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Exception caught: grade too high");
				}
		};

		class GrandTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Exception caught: grade too low");
				}
		};

		class FormNotSigned : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Exception caught: form has not been signed");
				}
		};

};

std::ostream &operator<<(std::ostream &os, const Form &srcs);

#endif
