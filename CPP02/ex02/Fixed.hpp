/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:27:43 by xli               #+#    #+#             */
/*   Updated: 2021/09/22 17:59:50 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_frac_bits = 8;

	public:
		Fixed();
		Fixed(const int N);
		Fixed(const float F);
		Fixed(const Fixed &copy);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&operator=(const Fixed &copy);
		bool	operator>(const Fixed &copy);
		bool	operator<(const Fixed &copy);
		bool	operator>=(const Fixed &copy);
		bool	operator<=(const Fixed &copy);
		bool	operator==(const Fixed &copy);
		bool	operator!=(const Fixed &copy);
		Fixed	operator+(const Fixed &copy) const;
		Fixed	operator-(const Fixed &copy) const;
		Fixed	operator*(const Fixed &copy) const;
		Fixed	operator/(const Fixed &copy) const;
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		static Fixed		&min(Fixed &f1, Fixed &f2);
		static Fixed const	&min(Fixed const &f1, Fixed const &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
		static Fixed const	&max(Fixed const &f1, Fixed const &f2);
};

std::ostream	&operator<<(std::ostream &o, const Fixed &srcs);

#endif
