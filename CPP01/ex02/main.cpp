#include "ZombieEvent.hpp"

int main()
{
	Zombie	zombie("Type A", "Bob");
	zombie.announce();

	Zombie		*new_zombie;
	ZombieEvent	zombie_event;

	zombie_event.setZombieType("Type B");
	new_zombie = zombie_event.newZombie("Jack");
	new_zombie->announce();
	delete new_zombie;
}
