/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:09:42 by xli               #+#    #+#             */
/*   Updated: 2021/09/28 11:57:31 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T> void	iter(T *addr, int len, void(* f)(T &))
{
	if (addr == NULL || len < 0)
		return ;
	for (int i = 0; i < len; i++)
		f(addr[i]);
}

template <typename T> void	display(T &t)
{
	std::cout << t << std::endl;
}

#endif
