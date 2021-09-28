/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:23:09 by xli               #+#    #+#             */
/*   Updated: 2021/09/28 15:44:01 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

int main()
{
	std::cout << "----------Array of int----------" << std::endl;
	Array<int> arr0;
	Array<int> arr1(5);
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		arr1[i] = rand() % 5;
	Array<int> arr2(arr1);
	Array<int> arr3 = arr2;
	std::cout << arr3 << std::endl;
	std::cout << "The number of elements is " << arr3.size() << std::endl;
	std::cout << std::endl;
	try
	{
		arr3[3] = 3;
		std::cout << arr3 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		arr3[6] = 6;
		std::cout << arr3 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "----------Array of string----------" << std::endl;

	Array<std::string> arr4;
	Array<std::string> arr5(3);
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
		arr5[i] = "string" + std::to_string(rand() % 3);
	Array<std::string> arr6(arr5);
	Array<std::string> arr7 = arr6;
	std::cout << arr7 << std::endl;
	std::cout << "The number of elements is " << arr3.size() << std::endl;
	std::cout << std::endl;
	try
	{
		arr5[1] = "string1" ;
		std::cout << arr5 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		arr5[4] = "string4";
		std::cout << arr5 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}

// #define MAX_VAL 750
// int main(int, char**)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];
// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	//SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	delete [] mirror;//

// 	return 0;
// }
