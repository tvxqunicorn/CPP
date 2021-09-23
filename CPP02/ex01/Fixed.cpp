/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:32:21 by xli               #+#    #+#             */
/*   Updated: 2021/09/23 10:31:07 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const int N)
{
	std::cout << "Int constructor called" << std::endl;
	_value = N << _fracBits;
}

Fixed::Fixed(const float F)
{
	std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(F * (float)(1 << _fracBits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	_value = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (float)(1 << _fracBits));
}

int		Fixed::toInt(void) const
{
	return (_value >> _fracBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &srcs)
{
	os << srcs.toFloat();
	return (os);
}
