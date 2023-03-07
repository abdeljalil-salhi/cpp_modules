/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:56:21 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/07 22:19:31 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
	: _value(0)
{
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
	: _value(value << this->_fractionalBits)
{
	if (DEBUG)
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
	: _value(roundf(value * (1 << this->_fractionalBits)))
{
	if (DEBUG)
		std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
	: _value(rhs._value)
{
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (DEBUG)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return *this;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return this->_value > rhs._value;
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return this->_value < rhs._value;
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return this->_value >= rhs._value;
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return this->_value <= rhs._value;
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return this->_value == rhs._value;
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return this->_value != rhs._value;
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	if (rhs._value == 0)
		throw std::runtime_error("Division by zero");
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

Fixed &Fixed::operator--(void)
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed _tmp(*this);
	this->_value++;
	return _tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed _tmp(*this);
	this->_value--;
	return _tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a._value > b._value) ? b : a;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a._value > b._value) ? b : a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a._value > b._value) ? a : b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a._value > b._value) ? a : b;
}

float Fixed::toFloat(void) const
{
	float _f = this->_value;
	_f /= (1 << this->_fractionalBits);
	return _f;
}

int Fixed::toInt(void) const
{
	return this->_value >> this->_fractionalBits;
}

void Fixed::setRawBits(int const raw)
{
	if (DEBUG)
		std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int Fixed::getRawBits(void) const
{
	if (DEBUG)
		std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

std::ostream &operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return os;
}
