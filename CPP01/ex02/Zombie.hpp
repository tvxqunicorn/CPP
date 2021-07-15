#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie;

class Zombie
{
	public:
		Zombie();
		Zombie(std::string type, std::string name);
		~Zombie();

		void	announce();
		
		//getter - setter
		std::string	getType();
		void	setType(std::string type);
		std::string	getName();
		void	setName(std::string name);

	private:
		std::string	_type;
		std::string	_name;
};

#endif
