/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:24:37 by xli               #+#    #+#             */
/*   Updated: 2021/09/14 13:34:44 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal	&operator=(const Animal &copy);

		std::string		getType() const;
		void			setType(std::string type);
		virtual void	makeSound() const = 0;
		virtual void	haveIdeas() const;
};

#endif
