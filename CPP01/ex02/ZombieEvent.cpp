#include "ZombieEvent.hpp"

//default Construtor
ZombieEvent::ZombieEvent() {}

ZombieEvent::~ZombieEvent() {}

std::string	ZombieEvent::getZombieType()
{
	return (this->_type);
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return(new Zombie(this->_type , name));
}
