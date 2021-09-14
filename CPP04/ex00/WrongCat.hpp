/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:58:39 by xli               #+#    #+#             */
/*   Updated: 2021/09/14 10:59:20 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		~WrongCat();

		WrongCat	&operator=(const WrongCat &copy);

		void	makeSound();
};

#endif
