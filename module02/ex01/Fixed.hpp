/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:36:19 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/07 22:30:01 by absalhi          ###   ########.fr       */
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