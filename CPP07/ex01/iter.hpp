/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:09:42 by xli               #+#    #+#             */
/*   Updated: 2021/10/14 16:45:22 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *addr, int len, void(* f)(T const &))
{
	if (addr == NULL || len < 0 || f == NULL)
		return ;
	for (int i = 0; i < len; i++)
		f(addr[i]);
}

template <typename T>
void	display(T &t)
{
	std::cout << t << std::endl;
}

#endif
