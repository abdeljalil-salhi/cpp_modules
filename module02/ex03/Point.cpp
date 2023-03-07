/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 02:51:26 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/07 22:20:02 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
	: _x(0), _y(0)
{
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y)
	: _x(x), _y(y)
{
	if (DEBUG)
		std::cout << "Parameterized constructor called" << std::endl;
}

Point::Point(Point const &rhs)
	: _x(rhs._x), _y(rhs._y)
{
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(void)
{
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=(Point const &rhs)
{
	if (DEBUG)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Fixed const &Point::getX(void) const
{
	return this->_x;
}

Fixed const &Point::getY(void) const
{
	return this->_y;
}

std::ostream &operator<<(std::ostream &os, Point const &rhs)
{
	os << "Point(" << rhs.getX() << ", " << rhs.getY() << ")";
	return os;
}
