/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:08:36 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:09:11 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
	: type("WrongCat")
{
	std::cout << "🐈  "
			  << this->type << " constructed."
			  << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	*this = rhs;
	std::cout << "🐈  "
			  << this->type << " copy constructed."
			  << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "🐈  "
			  << this->type << " destructed."
			  << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	if (DEBUG)
		std::cout << "🐈  "
				  << "Copy assignment operator called on "
				  << this->type << "." << std::endl;
	this->type = rhs.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "🐈  "
			  << this->type << ": meow meow 😽"
			  << std::endl;
}

std::string WrongCat::getType(void) const
{
	return this->type;
}
