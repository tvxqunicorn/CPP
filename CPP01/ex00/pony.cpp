#include "pony.hpp"

Pony::Pony(std::string const name): name(name)
{
	std::cout << "Pony was born, we will name it " << this->name << "." << std::endl;
}

Pony::~Pony()
{
	std::cout << this->name << " died :(" << std::endl;
}

void	Pony::sayHi()
{
	std::cout << "Hello, I am " << this->name << ". Nice to meet you!" << std::endl;
}
