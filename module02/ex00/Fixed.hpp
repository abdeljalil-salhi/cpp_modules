/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 01:22:21 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/07 22:27:18 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Fixed
{

	public:

		Fixed( void );
		Fixed( Fixed const &rhs );
		~Fixed( void );
		Fixed &operator=( Fixed const &rhs );

		void setRawBits( int const raw );

		int getRawBits( void ) const;

	private:

		int _value;
		static const int _fractionalBits = 8;

};

std::ostream &operator<<(std::ostream &os, Fixed const &rhs);

#endif