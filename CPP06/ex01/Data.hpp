/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:23:29 by xli               #+#    #+#             */
/*   Updated: 2021/09/24 17:41:13 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <cmath>

struct Data
{
};

uintptr_t	serialize(Data* ptr);
Data		*deserialize(uintptr_t raw);

#endif
