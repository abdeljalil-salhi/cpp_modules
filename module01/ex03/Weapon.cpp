/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:42:35 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 02:07:15 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "🧰 "
			  << this->_type << " forged and ready to use." << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "💣 "
			  << this->_type << " destroyed." << std::endl;
}

void Weapon::setType(std::string type)
{
	std::cout << "🛠️  "
			  << this->_type << " refined to " << type << "." << std::endl;
	this->_type = type;
}

std::string const &Weapon::getType(void) const
{
	return this->_type;
}
