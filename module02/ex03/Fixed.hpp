/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 02:49:18 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/07 22:19:47 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Fixed
{

	public:

		Fixed( void );
		Fixed( const int value );
		Fixed( const float value );
		Fixed( Fixed const &rhs );
		~Fixed( void );
		Fixed &operator=( Fixed const &rhs );
		
		/* Comparison operators overloading */
		bool operator>( Fixed const &rhs ) const;
		bool operator<( Fixed const &rhs ) const;
		bool operator>=( Fixed const &rhs ) const;
		bool operator<=( Fixed const &rhs ) const;
		bool operator==( Fixed const &rhs ) const;
		bool operator!=( Fixed const &rhs ) const;
		
		/* Arithmetic operators overloading */
		Fixed operator+( Fixed const &rhs ) const;
		Fixed operator-( Fixed const &rhs ) const;
		Fixed operator*( Fixed const &rhs ) const;
		Fixed operator/( Fixed const &rhs ) const;

		/* Pre-increment/decrement overloading */
		Fixed &operator++( void );
		Fixed &operator--( void );
		/* Post-increment/decrement overloading */
		Fixed operator++( int );
		Fixed operator--( int );

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);

		float toFloat( void ) const;
		int toInt( void ) const;

		void setRawBits( int const raw );

		int getRawBits( void ) const;

	private:

		int _value;
		static const int _fractionalBits = 8;

};

std::ostream &operator<<(std::ostream &os, Fixed const &rhs);

#endif
