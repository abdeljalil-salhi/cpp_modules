/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:40:22 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 23:43:46 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &rhs) : AMateria(rhs)
{
	*this = rhs;
}

Cure::~Cure(void)
{
}

Cure &Cure::operator=(Cure const &rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria *Cure::clone(void) const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals "
			  << target.getName() << "'s wounds *"
			  << std::endl;
}
