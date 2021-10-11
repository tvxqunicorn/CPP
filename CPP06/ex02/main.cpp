/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:30:40 by xli               #+#    #+#             */
/*   Updated: 2021/10/11 17:05:02 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

//randomly instanciates A, B or C and returns the instance as a Base pointer.
Base *generate(void)
{
	switch ((rand() % 3))
	{
	case 0:
		std::cout << "Instance: A" << std::endl;
		return (new A);
		break;
	case 1:
		std::cout << "Instance: B" << std::endl;
		return (new B);
		break;
	default:
		std::cout << "Instance: C" << std::endl;
		return (new C);
		break;
	}
}

//displays "A", "B" or "C" according to the real type of p
void	identify(Base *P)
{
	if (A *ptrA = dynamic_cast<A *>(P))
		std::cout << "Pointer: A" << std::endl;
	else if (B *ptrB = dynamic_cast<B *>(P))
		std::cout << "Pointer: B" << std::endl;
	else
		std::cout << "Pointer: C" << std::endl;
}

//displays "A", "B" or "C" according to the real type of p.
void	identify(Base &P)
{
	try
	{
		A	refA = dynamic_cast<A &>(P);
		std::cout << "Reference: A" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		B	refB = dynamic_cast<B &>(P);
		std::cout << "Reference: B" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		C	refC = dynamic_cast<C &>(P);
		std::cout << "Reference: C" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	srand(time(NULL));

	Base *P = generate();

	identify(P);
	identify(*P);
	delete P;

	return (0);
}
