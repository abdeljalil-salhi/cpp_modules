/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:24:46 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 03:28:03 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
	: type("Cat")
{
	this->brain = new Brain();
	std::cout << "🐈  "
			  << this->type << " constructed."
			  << std::endl;
}

Cat::Cat(Cat const &rhs)
{
	this->type = rhs.getType();
	this->brain = new Brain(*rhs.getBrain());
	std::cout << "🐈  "
			  << this->type << " copy constructed."
			  << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "🐈  "
			  << this->type << " destructed."
			  << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (DEBUG)
		std::cout << "🐈  "
				  << "Copy assignment operator called on "
				  << this->type << "." << std::endl;
	this->type = rhs.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*rhs.getBrain());
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "🐈  "
			  << this->type << ": meow meow 😽"
			  << std::endl;
}

std::string Cat::getType(void) const
{
	return this->type;
}

Brain *Cat::getBrain(void) const
{
	return this->brain;
}
