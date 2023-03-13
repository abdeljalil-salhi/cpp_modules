/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:24:07 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 22:22:00 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
	: _size(0), _vector(0)
{
}

Span::Span(unsigned int N)
	: _size(N), _vector(0)
{
}

Span::Span(Span const &rhs)
{
	*this = rhs;
}

Span::~Span(void)
{
}

Span &Span::operator=(Span const &rhs)
{
	if (this == &rhs)
		return *this;
	this->_size = rhs._size;
	this->_vector = rhs._vector;
	return *this;
}

void Span::addNumber(int number)
{
	if (this->_vector.size() == this->_size)
		throw std::range_error("No space left");
	this->_vector.push_back(number);
}

void Span::addRange(it begin, it end)
{
	vi _tmp(begin, end);
	if (_tmp.size() > this->_size - this->_vector.size())
		throw std::range_error("No space left");
	std::copy(_tmp.begin(), _tmp.end(), std::back_inserter(this->_vector));
}

int Span::shortestSpan(void) const
{
	vi _tmp = this->_vector;
	it _it;

	if (this->_size < 2)
		throw std::runtime_error("No span can be found");
	sort(_tmp.begin(), _tmp.end());
	int _span = *(_tmp.begin() + 1) - *(_tmp.begin());
	if (this->_vector.size() == 2)
		return _span;
	for (_it = _tmp.begin() + 1; _it != _tmp.end() - 1 && _span; _it++)
		if (*(_it + 1) - *(_it) < _span)
			_span = *(_it + 1) - *(_it);
	return _span;
}

int Span::longestSpan(void) const
{
	vi _tmp = this->_vector;

	if (this->_size < 2)
		throw std::runtime_error("No span can be found");
	sort(_tmp.begin(), _tmp.end());
	return *(_tmp.end() - 1) - *(_tmp.begin());
}

unsigned int Span::size(void) const
{
	return this->_size;
}

std::vector<int> Span::getVector(void) const
{
	return this->_vector;
}

std::ostream &operator<<(std::ostream &o, const Span &rhs)
{
	o << "Size: " << rhs.size() << std::endl;
	o << "Vector: ";
	for (size_t i = 0; i < rhs.size(); i++)
		o << rhs.getVector()[i] << " ";
	o << std::endl;
	return o;
}
