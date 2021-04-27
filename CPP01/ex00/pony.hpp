#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	public:
		std::string	const name;
		
		Pony(std::string const name);
		virtual	~Pony();
		void	sayHi();
};

#endif
