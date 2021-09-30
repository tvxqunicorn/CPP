/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:42:59 by xli               #+#    #+#             */
/*   Updated: 2021/09/30 16:30:31 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_slot[4];
		int			_sourceAmount;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();

		MateriaSource &operator=(const MateriaSource &copy);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
