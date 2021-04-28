#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "Zombie.hpp"

class ZombieEvent;

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();
		//getter - setter
		std::string	getZombieType();
		void	setZombieType(std::string type);

		Zombie	*newZombie(std::string name);
		Zombie	*randomChump();

	private:
		std::string	_type;
};

#endif
