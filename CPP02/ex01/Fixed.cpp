/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:32:21 by xli               #+#    #+#             */
/*   Updated: 2021/09/13 11:43:34 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed_point = 0;
}

Fixed::Fixed(const int N)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point = N << _frac_bits;
}

Fixed::Fixed(const float F)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_point = (int)roundf(F * (float)(1 << _frac_bits));
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
	_fixed_point = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_point = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixed_point / (float)(1 << _frac_bits));
}

int		Fixed::toInt(void) const
{
	return (_fixed_point >> _frac_bits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &srcs)
{
	o << srcs.toFloat();
	return (o);
}
