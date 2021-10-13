/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xli <xli@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:02:33 by xli               #+#    #+#             */
/*   Updated: 2021/10/13 15:35:48 by xli              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		size_t	_size;
		T		*_arr;

	public:
		Array();
		Array(unsigned n);
		Array(Array<T> const &copy);
		~Array();

		Array	&operator=(Array<T> const &copy);
		T		&operator[](size_t i) const;
		class Exception: public std::exception
		{
			public:
				const char *what() const throw();
		};

		size_t	size() const;
};

#endif

template <typename T>
Array<T>::Array()
{
	_arr = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned n)
{
	_arr = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(Array<T> const &copy)
{
	_arr = NULL;
	*this = copy;
}

template <typename T>
Array<T>::~Array()
{
	if (_arr)
	{
		delete [] _arr;
		_arr = NULL;
	}
}

template <typename T>
Array<T>	&Array<T>::operator=(Array<T> const &copy)
{
	if (this == &copy)
		return (*this);
	if (_arr)
	{
		delete [] _arr;
		_arr = NULL;
	}
	_size = copy.size();
	if (_size > 0)
	{
		_arr = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_arr[i] = copy[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](size_t i) const
{
	if (i >= _size)
		throw(Exception());
	return (_arr[i]);
}

template <typename T>
size_t	Array<T>::size() const
{
	return (_size);
}

template <typename T>
const char	*Array<T>::Exception::what() const throw()
{
	return("Element is out of the limits");
}

template<typename T>
std::ostream &operator<<(std::ostream &os, Array<T> const &srcs)
{
	for (size_t i = 0; i < srcs.size(); i++)
	{
		os << "Array[" << i << "] = " << srcs[i] << std::endl;
	}
	return (os);
}
