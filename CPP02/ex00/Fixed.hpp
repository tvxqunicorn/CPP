/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:27:43 by xli               #+#    #+#             */
/*   Updated: 2021/09/22 17:59:42 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_frac_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed	&operator=(const Fixed &copy);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
