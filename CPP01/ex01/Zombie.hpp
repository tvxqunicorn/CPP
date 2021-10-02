/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:27:09 by xli               #+#    #+#             */
/*   Updated: 2021/10/02 15:33:58 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce();
		void	setName(std::string name);

	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
