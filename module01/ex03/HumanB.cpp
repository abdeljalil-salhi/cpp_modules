/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:40:03 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 02:06:42 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr)
{
	std::cout << "✨ "
			  << this->_name << " spawned with no weapon."
			  << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "☠️  "
			  << this->_name << " died." << std::endl;
}

void HumanB::attack(void)
{
	std::cout << "⚔️  ";
	if (this->_weapon)
		std::cout << this->_name << " attacks with their "
				  << this->_weapon->getType() << "." << std::endl;
	else
		std::cout << this->_name << " attacks with their fist." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	std::cout << "🛡️  "
			  << this->_name << " takes the " << this->_weapon->getType()
			  << "." << std::endl;
}
