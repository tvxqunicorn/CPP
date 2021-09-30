/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:34:16 by xli               #+#    #+#             */
/*   Updated: 2021/09/30 16:34:13 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		virtual ~Ice();

		Ice &operator=(const Ice &copy);

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
