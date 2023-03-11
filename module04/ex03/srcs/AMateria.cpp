/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:30:06 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 04:46:03 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "⚗️   "
			  << "Abstract Materia created."
			  << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "⚗️   "
			  << "Abstract Materia " << this->_type << " created."
			  << std::endl;
}

AMateria::AMateria(AMateria const &rhs)
	: _type(rhs._type)
{
	std::cout << "⚗️   "
			  << "Abstract Materia " << this->_type << " created by copy."
			  << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "💥  "
			  << "Abstract Materia " << this->_type << " exploded."
			  << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	(void)rhs;
	return *this;
}

std::string const &AMateria::getType(void) const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "🔥  "
			  << "Abstract Materia " << this->_type
			  << " abstractly used on " << target.getName() << "."
			  << std::endl;
}
