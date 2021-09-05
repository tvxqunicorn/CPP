/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:53:13 by xli               #+#    #+#             */
/*   Updated: 2021/09/03 16:31:11 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon;

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		void		setType(std::string type);
		std::string	getType() const;

	private:
		std::string _type;
};

#endif
