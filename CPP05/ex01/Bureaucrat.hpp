/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:14:51 by xli               #+#    #+#             */
/*   Updated: 2021/09/20 09:44:41 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &copy);

		std::string	getName() const;
		int			getGrade() const;
		void		upGrade();
		void		downGrade();
		void		signForm(Form &form);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Exception caught: grade too high");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Exception caught: grade too low");
				}
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &srcs);

#endif
