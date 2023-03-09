/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:44:13 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/09 02:10:05 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: ClapTrap(), _guardMode(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "🔵🛡️  "
			  << "ScavTrap " << this->_name << " constructed."
			  << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name), _guardMode(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "🔵🛡️  "
			  << "ScavTrap " << this->_name << " constructed."
			  << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
	: ClapTrap(rhs), _guardMode(rhs._guardMode)
{
	std::cout << "🔵🛡️  "
			  << "ScavTrap " << this->_name << " copy constructed."
			  << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "🔵💣 "
			  << "ScavTrap " << this->_name << " destroyed."
			  << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	if (DEBUG)
		std::cout << "🔵🗜️  "
				  << "Copy assignment operator called on ScavTrap "
				  << this->_name << "." << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	(this->_energyPoints > 0 && this->_hitPoints > 0)
		? std::cout << "🔵⚔️  "
					<< "ScavTrap " << this->_name << " attacks " << target << ","
					<< " causing " << this->_attackDamage << " points of damage!"
					<< std::endl &&
			  this->_energyPoints--
	: (this->_energyPoints == 0)
		? std::cout << "🔵🚫 "
					<< "ScavTrap " << this->_name << " can't attack because"
					<< " it has no energy points left."
					<< std::endl
		: std::cout << "🔵🚫 "
					<< "ScavTrap " << this->_name << " can't attack because"
					<< " it has no hit points left."
					<< std::endl;
}

void ScavTrap::guardGate(void)
{
	(this->_guardMode)
		? std::cout << "🔵🚫 "
					<< "ScavTrap " << this->_name << " is already in Gate keeper mode."
					<< std::endl
		: std::cout << "🔵⛩️  "
					<< "ScavTrap " << this->_name << " enters Gate keeper mode."
					<< std::endl,
		this->_guardMode = true;
}
