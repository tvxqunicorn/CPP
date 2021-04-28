#include "ZombieEvent.hpp"

//default Construtor
ZombieEvent::ZombieEvent()
{
	srand(time(NULL));
}

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

Zombie	*ZombieEvent::randomChump()
{
	std::string	names[] = {"Norman", "Misha", "Sherry", "Preston", "Tai", "Hajra", "Bluebell", "Miley", "Cassidy", "Magnus"};
	Zombie		*res;

	res = new Zombie(this->_type, names[rand() % 10]);
	return (res);
}
