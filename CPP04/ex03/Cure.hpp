/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:50:20 by xli               #+#    #+#             */
/*   Updated: 2021/09/30 16:34:31 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		virtual ~Cure();

		Cure &operator=(const Cure &copy);

		AMateria	*clone() const;
		void	use(ICharacter &target);
};

#endif
