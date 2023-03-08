/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:58:37 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/08 22:41:11 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "⚪🛡️  "
			  << "ClapTrap " << this->_name << " constructed."
			  << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	*this = rhs;
	std::cout << "⚪🛡️  "
			  << "ClapTrap " << this->_name << " copy constructed."
			  << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "⚪💣 "
			  << "ClapTrap " << this->_name << " destroyed."
			  << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	if (DEBUG)
		std::cout << "⚪🗜️  "
				  << "Copy assignment operator called on ClapTrap "
				  << this->_name << "." << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	(this->_energyPoints > 0 && this->_hitPoints > 0)
		? std::cout << "⚪⚔️  "
					<< "ClapTrap " << this->_name << " attacks " << target << ","
					<< " causing " << this->_attackDamage << " points of damage!"
					<< std::endl &&
			  this->_energyPoints--
	: (this->_energyPoints == 0)
		? std::cout << "⚪🚫 "
					<< "ClapTrap " << this->_name << " can't attack because"
					<< " it has no energy points left."
					<< std::endl
		: std::cout << "⚪🚫 "
					<< "ClapTrap " << this->_name << " can't attack because"
					<< " it has no hit points left."
					<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "⚪🚫 "
				  << "ClapTrap " << this->_name << " is already destroyed with no hit points left."
				  << std::endl;
		return;
	}
	(amount > this->_hitPoints)
		? this->_hitPoints = 0
		: this->_hitPoints -= amount;
	std::cout << "⚪🎯 "
			  << "ClapTrap " << this->_name << " takes " << amount
			  << " points of damage, and has now " << this->_hitPoints << " hit points left."
			  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	(this->_energyPoints > 0 && this->_hitPoints > 0)
		? std::cout << "⚪💉 "
					<< "ClapTrap " << this->_name << " gets repaired,"
					<< " getting " << amount << " hit points back."
					<< std::endl &&
			  ((this->_energyPoints--) && (this->_hitPoints += amount))
	: (this->_energyPoints == 0)
		? std::cout << "⚪🚫 "
					<< "ClapTrap " << this->_name << " can't be repaired because"
					<< " it has no energy points left."
					<< std::endl
		: std::cout << "⚪🚫 "
					<< "ClapTrap " << this->_name << " can't be repaired because"
					<< " it has no hit points left."
					<< std::endl;
}

void ClapTrap::setName(const std::string &name)
{
	std::cout << "⚪🗜️  "
			  << "ClapTrap " << this->_name << " renames itself to "
			  << name << "." << std::endl;
	this->_name = name;
}
