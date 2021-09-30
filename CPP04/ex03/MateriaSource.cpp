/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:47:01 by xli               #+#    #+#             */
/*   Updated: 2021/09/30 16:41:54 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_sourceAmount = 0;
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] != NULL)
			delete _slot[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++)
		_slot[i] = copy._slot[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (_sourceAmount == 4)
	{
		std::cout << "Materia source is full" << std::endl;
		return ;
	}
	if (materia == NULL)
	{
		std::cout << "Invalid materia" << std::endl;
		return ;
	}
	_slot[_sourceAmount++] = materia;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i]->getType() == type)
			return (_slot[i]->clone());
	}
	return NULL;
}
