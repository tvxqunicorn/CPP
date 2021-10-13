/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:23:06 by xli               #+#    #+#             */
/*   Updated: 2021/10/13 14:10:02 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack<T> const &copy) : std::stack<T>(copy) {};
		MutantStack &operator=(MutantStack<T> const &copy)
		{
			if (this == &copy)
				return (*this);
			std::stack<T>::operation=(copy);
			return (*this);
		};
		virtual ~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		//c is the the underlying container
		iterator	begin() {return (std::stack<T>::c.begin());}
		iterator	end() {return (std::stack<T>::c.end());}
};

#endif
