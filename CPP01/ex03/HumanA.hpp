/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:20:33 by xli               #+#    #+#             */
/*   Updated: 2021/09/03 16:36:20 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA;

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon); //why &weapon???
		~HumanA();

		void	attack();

	private:
		std::string	_name;
		Weapon		&_weapon; //why &_weapon???
};

#endif
