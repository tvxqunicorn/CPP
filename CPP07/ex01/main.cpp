/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:50:33 by xli               #+#    #+#             */
/*   Updated: 2021/09/28 11:58:23 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int			arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::string	arr2[] = {"bonjour", "coucou", "salut"};

	iter(arr1, 10, display);
	iter(arr2, 3, display);

	return (0);
}
