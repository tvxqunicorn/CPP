/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:11:12 by xli               #+#    #+#             */
/*   Updated: 2021/09/30 13:49:27 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <set>

class span
{
	private:
		std::multiset<int>	_nums;
		unsigned			_size;
		int					_min;
		int					_max;

	public:
		span();
		span(unsigned size);
		virtual ~span();

		span &operator=(const span &copy);

		void		addNumber(int num);
		template<typename it>
		void		addNumber(it begin, it end);
		int			shortestSpan() const;
		int			longestSpan() const;
		void		display() const;

		class	SpanIsFull : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	NoSpanToFind : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
