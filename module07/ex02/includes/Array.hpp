/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:23:46 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 11:02:57 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	
	public:
	
		Array( void )
			: _array(new T[0]()), _size(0) {}
		
		Array( unsigned int n )
			: _array(new T[n]()), _size(n) {}
		
		Array( Array const &rhs )
			: _array(new T[rhs._size]()), _size(rhs._size)
		{
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
		}
		
		~Array( void )
		{
			if (this->_array)
				delete[] this->_array;
		}
		
		Array &operator=( Array const &rhs )
		{
			if (this->_array)
				delete[] this->_array;
			this->_array = new T[rhs._size]();
			this->_size = rhs._size;
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return *this;
		}
		
		T &operator[]( unsigned int i )
		{
			if (i >= this->_size || !this->_array)
				throw Array<T>::OutOfRange();
			return this->_array[i];
		}

		class OutOfRange: public std::exception
		{
			public:
				virtual const char *what( void ) const throw()
				{
					return "Index is out of bounds";
				}
		};

	protected:

	private:

		T *_array;
		size_t _size;
	
};

#endif
