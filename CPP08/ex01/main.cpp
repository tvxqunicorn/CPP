/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:09:45 by xli               #+#    #+#             */
/*   Updated: 2021/10/13 11:30:10 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>

int main()
{
	std::cout << "----------Adding numbers one by one----------" << std::endl;
	try
	{
		span	testA(5);

		testA.addNumber(21);
		testA.addNumber(42);
		testA.addNumber(19);
		testA.addNumber(0);
		testA.addNumber(101);
		testA.display();
		std::cout << "The shortest span is: " << testA.shortestSpan() << std::endl;
		std::cout << "The longest span is: " << testA.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------Adding numbers with iter----------" << std::endl;
	try
	{
		span				testB(10001);
		//span				testB(10000);
		std::vector<int>	vec(10000, 3); //size, value

		testB.addNumber(42);
		testB.display();
		testB.addNumber(vec.begin(), vec.end());
		testB.display();
		std::cout << "The shortest span is: " << testB.shortestSpan() << std::endl;
		std::cout << "The longest span is: " << testB.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------Full span exception----------" << std::endl;
	try
	{
		span	testC(3);

		testC.addNumber(21);
		testC.addNumber(42);
		testC.addNumber(19);
		testC.addNumber(0);
		testC.display();
		std::cout << "The shortest span is: " << testC.shortestSpan() << std::endl;
		std::cout << "The longest span is: " << testC.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------No span exception----------" << std::endl;
	try
	{
		span	testC(3);

		testC.addNumber(42);
		testC.display();
		std::cout << "The shortest span is: " << testC.shortestSpan() << std::endl;
		std::cout << "The longest span is: " << testC.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
