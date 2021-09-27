/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:30:40 by xli               #+#    #+#             */
/*   Updated: 2021/09/27 10:54:49 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

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
	if (A *a = dynamic_cast<A *>(P))
		std::cout << "Pointer: A" << std::endl;
	else if (B *b = dynamic_cast<B *>(P))
		std::cout << "Pointer: B" << std::endl;
	else
		std::cout << "Pointer: C" << std::endl;
	delete P;
}

//displays "A", "B" or "C" according to the real type of p.
void	identify(Base &P)
{
	try
	{
		A	a = dynamic_cast<A &>(P);
		std::cout << "Reference: A" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		B	b = dynamic_cast<B &>(P);
		std::cout << "Reference: B" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		C	c = dynamic_cast<C &>(P);
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

	// std::cout << "Identifying by pointer" << std::endl;
	// identify(generate());

	// std::cout << "Identifying by reference" << std::endl;
	// A	a;
	// B	b;
	// C	c;
	// identify(a);
	// identify(b);
	// identify(c);

	Base *P = generate();

	identify(*P);
	identify(P);

	return (0);
}
