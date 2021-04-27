#include "pony.hpp"

void	ponyOnTheStack()
{
	Pony Bob("Bob");
	Bob.sayHi();
}

void	ponyOnTheHeap()
{
	Pony *Jack;
	Jack = new Pony("Jack");
	Jack->sayHi();
	delete Jack;
}

int main()
{
	std::cout << "--- ponyOnTheStack ---" << std::endl;
	ponyOnTheStack();
	std::cout << "--- ponyOnTheHeap ---" << std::endl;
	ponyOnTheHeap();
	return (0);
}
