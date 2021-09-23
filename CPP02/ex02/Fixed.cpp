/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:32:21 by xli               #+#    #+#             */
/*   Updated: 2021/09/23 10:33:06 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const int N)
{
	_value = N << _fracBits;
}

Fixed::Fixed(const float F)
{
	_value = (int)roundf(F * (float)(1 << _fracBits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

Fixed::~Fixed() {}

/*
** -------------------- GETTER-SETTER --------------------
*/

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int		Fixed::getRawBits(void) const
{
	return (_value);
}

/*
** -------------------- OVERLOADING --------------------
*/

Fixed	&Fixed::operator=(const Fixed &copy)
{
	if (this == &copy)
		return (*this);
	_value = copy._value;
	return (*this);
}

bool	Fixed::operator>(const Fixed &copy)
{
	return (this->getRawBits() > copy.getRawBits());
}

bool	Fixed::operator<(const Fixed &copy)
{
	return (this->getRawBits() < copy.getRawBits());
}

bool	Fixed::operator>=(const Fixed &copy)
{
	return (this->getRawBits() >= copy.getRawBits());
}

bool	Fixed::operator<=(const Fixed &copy)
{
	return (this->getRawBits() <= copy.getRawBits());
}

bool	Fixed::operator==(const Fixed &copy)
{
	return (this->getRawBits() == copy.getRawBits());
}

bool	Fixed::operator!=(const Fixed &copy)
{
	return (this->getRawBits() != copy.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &copy) const
{
	return Fixed(this->toFloat() + copy.toFloat());
}

Fixed	Fixed::operator-(const Fixed &copy) const
{
	return Fixed(this->toFloat() - copy.toFloat());
}

Fixed	Fixed::operator*(const Fixed &copy) const
{
	return Fixed(this->toFloat() * copy.toFloat());
}

Fixed	Fixed::operator/(const Fixed &copy) const
{
	if (copy.getRawBits() == 0)
	{
		std::cout << "Divisor is 0, stop";
		return (*this);
	}
	return Fixed(this->toFloat() / copy.toFloat());
}

Fixed	&Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed copy(*this);
	_value++;
	return (copy);
}

Fixed	&Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed copy(*this);
	_value--;
	return (copy);
}

/*
** -------------------- METHODS --------------------
*/

float	Fixed::toFloat(void) const
{
	return ((float)_value / (float)(1 << _fracBits));
}

int		Fixed::toInt(void) const
{
	return (_value >> _fracBits);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return (f1);
	return (f2);
}

std::ostream &operator<<(std::ostream &o, const Fixed &srcs)
{
	o << srcs.toFloat();
	return (o);
}
