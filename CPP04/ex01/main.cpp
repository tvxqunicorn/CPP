/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:23:37 by xli               #+#    #+#             */
/*   Updated: 2021/10/06 10:35:51 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "----------Array----------" << std::endl;

	Animal *a[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 4 / 2)
			a[i] = new Dog();
		else
			a[i] = new Cat();
		std::cout << "[" << i << "] ";
		a[i]->makeSound();
		std::cout << "[" << i << "] ";
		a[i]->haveIdeas();
	}
	for (int i = 0; i < 4; i++)
		delete a[i];

	std::cout << "----------Deep Copy----------" << std::endl;

	Cat	cat;
	Cat	copycat(cat);

	std::cout << "(" << &cat << ")" << std::endl;
	cat.haveIdeas();
	std::cout << "(" << &copycat << ")" << std::endl;
	copycat.haveIdeas();

	return (0);
}
