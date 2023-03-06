/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 01:30:09 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/06 03:28:09 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = obj.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

std::ostream &operator<<(std::ostream &o, Fixed const &obj)
{
	o << obj.getRawBits();
	return o;
}
