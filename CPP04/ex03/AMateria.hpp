/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:59:21 by xli               #+#    #+#             */
/*   Updated: 2021/09/23 12:01:38 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();

		AMateria &operator=(const AMateria &copy);

		std::string			const &getType() const; //why &?
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
