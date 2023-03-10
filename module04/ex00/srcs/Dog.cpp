/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:58:37 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:01:24 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
	: type("Dog")
{
	std::cout << "🐕  "
			  << this->type << " constructed."
			  << std::endl;
}

Dog::Dog(Dog const &rhs)
{
	*this = rhs;
	std::cout << "🐕  "
			  << this->type << " copy constructed."
			  << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "🐕  "
			  << this->type << " destructed."
			  << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (DEBUG)
		std::cout << "🐕  "
				  << "Copy assignment operator called on "
				  << this->type << "." << std::endl;
	this->type = rhs.type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "🐕  "
			  << this->type << ": BARK BARKKK !!! 🐶"
			  << std::endl;
}

std::string Dog::getType(void) const
{
	return this->type;
}
