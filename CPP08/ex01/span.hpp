/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:11:12 by xli               #+#    #+#             */
/*   Updated: 2021/10/19 09:18:49 by xli              ###   ########lyon.fr   */
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

		span();
		span(const span &copy);
		span &operator=(const span &copy);

	public:
		span(unsigned size);
		virtual ~span();

		void		addNumber(int num);
		int			shortestSpan() const;
		int			longestSpan() const;
		void		display() const;

		template<typename it>
		void		addNumber(it begin, it end); //adding numbers by passing a range of iter

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

template <typename it>
void	span::addNumber(it begin, it end)
{
	if (std::distance(begin, end) + _nums.size() > _size)
		throw (SpanIsFull());
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}

#endif
