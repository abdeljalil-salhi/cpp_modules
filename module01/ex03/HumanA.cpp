/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:11:38 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 02:07:00 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "✨ "
			  << this->_name << " spawned with "
			  << this->_weapon.getType() << "." << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "☠️  "
			  << this->_name << " died." << std::endl;
}

void HumanA::attack(void)
{
	std::cout << "⚔️  "
			  << this->_name << " attacks with their "
			  << this->_weapon.getType() << "." << std::endl;
}
