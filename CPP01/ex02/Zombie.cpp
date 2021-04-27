#include "Zombie.hpp"

//default Constructor
Zombie::Zombie() {}

Zombie::Zombie(std::string type, std::string name): _type(type), _name(name) {}

//Destructor
Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> "
	<< "is dead" << std::endl;
}

std::string	Zombie::getType()
{
	return (this->_type);
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}

std::string	Zombie::getName()
{
	return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> "
	<< "Braiiiiiiinnnssss..." << std::endl;
}
