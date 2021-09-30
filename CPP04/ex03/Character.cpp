/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:19:01 by xli               #+#    #+#             */
/*   Updated: 2021/09/30 16:42:09 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_materiaAmount = 0;
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

Character::Character(std::string name)
{
	_name = name;
	_materiaAmount = 0;
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] != NULL)
			delete _slot[i];
	}
}

Character	&Character::operator=(const Character &copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++)
		_slot[i] = copy._slot[i];
	_name = copy._name;
	_materiaAmount = copy._materiaAmount;
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	if (_materiaAmount == 4)
	{
		std::cout << "Slot is full" << std::endl;
		return ;
	}
	if (m == NULL)
	{
		std::cout << "Materia does not exist" << std::endl;
		return ;
	}
	_slot[_materiaAmount++] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= _materiaAmount)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	_slot[idx] = NULL;
	_materiaAmount--;
	for (int i = idx; i < _materiaAmount; i++)
	{
		_slot[i] = _slot[i + 1];
		_slot[i + 1] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= _materiaAmount)
	{
		std::cout << "Invalid index to use" << std::endl;
		return ;
	}
	_slot[idx]->use(target);
}
