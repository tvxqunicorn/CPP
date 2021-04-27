#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony;

class Pony
{
	public:
		Pony();
		Pony(std::string const name);
		virtual	~Pony();

		void	sayHi();

	private:
		std::string	_name;
};

#endif
