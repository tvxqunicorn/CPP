/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:57:15 by xli               #+#    #+#             */
/*   Updated: 2021/09/05 15:23:13 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen;

class Karen
{
	public:
		Karen();
		~Karen();

		void	complain(std::string level);

	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

typedef void	(Karen::*func)(void);

#endif
