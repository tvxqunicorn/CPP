/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:23:37 by xli               #+#    #+#             */
/*   Updated: 2021/09/22 18:06:07 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal	*meta = new Animal();
	Animal	*j = new Dog();
	Animal	*i = new Cat();
	WrongAnimal *wrongMeta = new WrongAnimal();
	WrongAnimal *wrongI = new WrongCat();

	std::cout << "Hi, I am a " << j->getType() << " " << std::endl;
	j->makeSound();

	std::cout << "Hi, I am a " << i->getType() << " " << std::endl;
	i->makeSound();

	std::cout << "Hi, I am a " << wrongI->getType() << " " << std::endl;
	wrongI->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongI;

	return (0);
}
