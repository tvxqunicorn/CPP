/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:20:33 by xli               #+#    #+#             */
/*   Updated: 2021/09/22 13:17:13 by xli              ###   ########lyon.fr   */
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
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack();

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
