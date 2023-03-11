/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:42:50 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 23:43:39 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &rhs) : AMateria(rhs)
{
	*this = rhs;
}

Ice::~Ice(void)
{
}

Ice &Ice::operator=(Ice const &rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria *Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "
			  << target.getName() << " *"
			  << std::endl;
}
