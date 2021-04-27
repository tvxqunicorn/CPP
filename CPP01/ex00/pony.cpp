#include "Pony.hpp"

Pony::Pony() {}

Pony::Pony(std::string const name): _name(name)
{
	std::cout << "Pony was born, we will name it " << this->_name << "." << std::endl;
}

Pony::~Pony()
{
	std::cout << this->_name << " died :(" << std::endl;
}

void	Pony::sayHi()
{
	std::cout << "Hello, I am " << this->_name << ". Nice to meet you!" << std::endl;
}
