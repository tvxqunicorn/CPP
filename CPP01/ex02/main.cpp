#include "ZombieEvent.hpp"

int main()
{
	Zombie		*zombie;
	ZombieEvent	zombie_event;

	zombie = new Zombie("Type A", "Bob");
	zombie->announce();
	delete zombie;

	zombie_event.setZombieType("Type B");
	zombie = zombie_event.newZombie("Jack");
	zombie->announce();
	delete zombie;

	zombie_event.randomChump();
	zombie->announce();
	delete zombie;
}
