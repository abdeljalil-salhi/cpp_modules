/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:07:43 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:08:12 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	: type("WrongAnimal")
{
	std::cout << "📦  "
			  << this->type << " constructed."
			  << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	*this = rhs;
	std::cout << "📦  "
			  << this->type << " copy constructed."
			  << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "📦  "
			  << this->type << " destructed."
			  << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (DEBUG)
		std::cout << "📦  "
				  << "Copy assignment operator called on "
				  << this->type << "." << std::endl;
	this->type = rhs.type;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "📦  "
			  << this->type << ": *inaudible noise*"
			  << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}
