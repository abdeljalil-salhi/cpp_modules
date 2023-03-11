/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:30:06 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 23:31:31 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::AMateria(AMateria const &rhs)
{
	*this = rhs;
}

AMateria::~AMateria(void)
{
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	return *this;
}

std::string const &AMateria::getType(void) const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
