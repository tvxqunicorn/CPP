/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:52:41 by xli               #+#    #+#             */
/*   Updated: 2021/10/15 14:22:44 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack1;

	mstack1.push(0);
	mstack1.push(1);

	std::cout << "Last elemet of mstack1 is: " << mstack1.top() << std::endl;

	mstack1.pop();

	std::cout << "Size of mstack1 is: " << mstack1.size() << std::endl;

	mstack1.push(2);
	mstack1.push(3);
	mstack1.push(4);
	mstack1.push(5);

	MutantStack<int>::iterator it1 = mstack1.begin();
	MutantStack<int>::iterator ite1 = mstack1.end();

	while (it1 != ite1)
	{
		std::cout << "mstack1 : " << *it1 << std::endl;
		++it1;
	}

	std::cout << "Copying mstack1 to mstack2... " << std::endl;
	MutantStack<int> mstack2(mstack1);
	std::cout << "Copying mstack2 to mstack3... " << std::endl;
	MutantStack<int> mstack3 = mstack2;
	std::cout << "Last elemet of mstack3 is: " << mstack3.top() << std::endl;
	std::cout << "Size of mstack3 is: " << mstack3.size() << std::endl;

	MutantStack<int>::iterator it3 = mstack3.begin();
	MutantStack<int>::iterator ite3 = mstack3.end();

	while (it3 != ite3)
	{
		std::cout << "mstack3 : " << *it3 << std::endl;
		++it3;
	}

	return 0;
}
