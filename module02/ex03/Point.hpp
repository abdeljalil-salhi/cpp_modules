/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 02:51:31 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/07 22:19:57 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class Point
{

	public:

		Point( void );
		Point( float const x, float const y );
		Point( Point const &rhs );
		~Point( void );
		Point &operator=( Point const &rhs );
		
		Fixed const &getX( void ) const;
		Fixed const &getY( void ) const;

	private:

		Fixed const _x;
		Fixed const _y;

};

std::ostream &operator<<(std::ostream &os, Point const &rhs);

bool bsp( Point const a, Point const b, Point const c, Point const  point );

#endif