/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:40:22 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 04:11:36 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
	: _type("cure")
{
	std::cout << "🧪  "
			  << "Cure Materia created."
			  << std::endl;
}

Cure::Cure(Cure const &rhs)
	: _type(rhs._type)
{
	std::cout << "🧪  "
			  << "Cure Materia created copying its type from "
			  << rhs._type << "."
			  << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "💥  "
			  << "Cure Materia exploded."
			  << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
	this->_type = rhs._type;
	return *this;
}

Cure *Cure::clone(void) const
{
	std::cout << "🧪  "
			  << "Cure Materia cloned."
			  << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "🧬  "
			  << "* heals "
			  << target.getName() << "'s wounds *"
			  << std::endl;
}

std::string const &Cure::getType(void) const
{
	return this->_type;
}
