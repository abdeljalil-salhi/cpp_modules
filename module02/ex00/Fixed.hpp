/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 01:22:21 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/06 01:31:09 by absalhi          ###   ########.fr       */
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
		Fixed( Fixed const &obj );
		~Fixed( void );
		Fixed &operator=( Fixed const &obj );

		void setRawBits( int const raw );

		int getRawBits( void ) const;

	private:

		int _n;
		static const int _s = 8;

};

std::ostream &operator<<(std::ostream &out, Fixed const &obj);

#endif