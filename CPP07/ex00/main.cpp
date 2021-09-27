/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:17:49 by xli               #+#    #+#             */
/*   Updated: 2021/09/27 12:06:03 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() //why adding :: before functions?
{
	int	a = 10;
	int	b = 20;

	std::cout << "a: " << a << "; " << "b :" << b << std::endl;
	std::cout << "----------SWAP----------" << std::endl;
	::swap(a, b);
	std::cout << "a: " << a << "; " << "b :" << b << std::endl;

	std::cout << "----------MIN----------" << std::endl;
	std::cout << "min: " << ::min(a, b) << std::endl;

	std::cout << "----------MAX----------" << std::endl;
	std::cout << "max: " << ::max(a, b) << std::endl;

	std::cout << std::endl;

	std::string	s1 = "Hello";
	std::string	s2 = "Hi";

	std::cout << "s1: " << s1 << "; " << "s2: " << s2 << std::endl;
	std::cout << "----------SWAP----------" << std::endl;
	::swap(s1, s2);
	std::cout << "s1: " << s1 << "; " << "s2: " << s2 << std::endl;

	std::cout << "----------MIN----------" << std::endl;
	std::cout << "min: " << ::min(s1, s2) << std::endl;

	std::cout << "----------MAX----------" << std::endl;
	std::cout << "max: " << ::max(s1, s2) << std::endl;

	return (0);
}
