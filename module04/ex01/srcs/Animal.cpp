/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:18:31 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 01:56:46 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
	: type("Animal")
{
	std::cout << "📦  "
			  << this->type << " constructed."
			  << std::endl;
}

Animal::Animal(Animal const &rhs)
{
	*this = rhs;
	std::cout << "📦  "
			  << this->type << " copy constructed."
			  << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "📦  "
			  << this->type << " destructed."
			  << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	if (DEBUG)
		std::cout << "📦  "
				  << "Copy assignment operator called on "
				  << this->type << "." << std::endl;
	this->type = rhs.type;
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "📦  "
			  << this->type << ": *inaudible noise*"
			  << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;
}
