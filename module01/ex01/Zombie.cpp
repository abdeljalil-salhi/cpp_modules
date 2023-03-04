/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:57:42 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/03 22:47:31 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Zombie")
{
	if (DEBUG)
		std::cout << this->_name << " appeared." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	if (DEBUG)
		std::cout << this->_name << " appeared." << std::endl;
}

Zombie::~Zombie(void)
{
	if (DEBUG)
		std::cout << this->_name << " died." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	if (DEBUG)
		std::cout << this->_name << " renamed to " << name << "." << std::endl;
	this->_name = name;
}

std::string Zombie::getName(void) const
{
	return this->_name;
}
