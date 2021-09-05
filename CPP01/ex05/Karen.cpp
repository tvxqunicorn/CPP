/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:00:44 by xli               #+#    #+#             */
/*   Updated: 2021/09/05 15:24:57 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func		funcs[4] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*(funcs[i]))();
			return ;
		}
	}
	std::cout << "I am fine" << std::endl;
}

void	Karen::_debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
			<< std::endl;
}

void	Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
			<< std::endl;
}

void	Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
			<< std::endl;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
			<< std::endl;
}
