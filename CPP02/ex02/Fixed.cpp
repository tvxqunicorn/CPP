/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:32:21 by xli               #+#    #+#             */
/*   Updated: 2021/09/13 12:09:50 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** -------------------- CONSTRUCTOR --------------------
*/

Fixed::Fixed()
{
	_fixed_point = 0;
}

Fixed::Fixed(const int N)
{
	_fixed_point = N << _frac_bits;
}

Fixed::Fixed(const float F)
{
	_fixed_point = (int)roundf(F * (float)(1 << _frac_bits));
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
	_fixed_point = raw;
}

int		Fixed::getRawBits(void) const
{
	return (_fixed_point);
}

/*
** -------------------- OVERLOADING --------------------
*/

Fixed	&Fixed::operator=(const Fixed &copy)
{
	if (this == &copy)
		return (*this);
	_fixed_point = copy._fixed_point;
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
	_fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed copy(*this);
	_fixed_point++;
	return (copy);
}

Fixed	&Fixed::operator--()
{
	_fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed copy(*this);
	_fixed_point--;
	return (copy);
}

/*
** -------------------- METHODS --------------------
*/

float	Fixed::toFloat(void) const
{
	return ((float)_fixed_point / (float)(1 << _frac_bits));
}

int		Fixed::toInt(void) const
{
	return (_fixed_point >> _frac_bits);
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
