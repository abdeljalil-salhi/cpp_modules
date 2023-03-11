/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:42:50 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 04:45:14 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
	: _type("ice")
{
	std::cout << "❄️   "
			  << "Ice Materia created."
			  << std::endl;
}

Ice::Ice(Ice const &rhs)
	: _type(rhs.getType())
{
	std::cout << "❄️   "
			  << "Ice Materia created copying its type from "
			  << rhs._type << "."
			  << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "💥  "
			  << "Ice Materia exploded."
			  << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return *this;
}

Ice *Ice::clone(void) const
{
	std::cout << "❄️   "
			  << "Ice Materia cloned."
			  << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "🧫  "
			  << "* shoots an ice bolt at "
			  << target.getName() << " *"
			  << std::endl;
}

std::string const &Ice::getType(void) const
{
	return this->_type;
}
