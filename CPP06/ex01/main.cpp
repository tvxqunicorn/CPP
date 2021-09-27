/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:13:06 by xli               #+#    #+#             */
/*   Updated: 2021/09/27 09:05:55 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data *ptr = new Data;

	std::cout << ptr << std::endl;
	std::cout << deserialize(serialize(ptr)) << std::endl;

	return (0);
}
