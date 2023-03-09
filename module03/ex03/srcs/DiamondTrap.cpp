/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:58:13 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/09 21:19:37 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	: ClapTrap("default_clap_name")
{
	this->_name = "default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "💎🛡️  "
			  << "DiamondTrap " << this->_name << " constructed."
			  << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "💎🛡️  "
			  << "DiamondTrap " << this->_name << " constructed."
			  << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs)
	: ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs)
{
	*this = rhs;
	std::cout << "💎🛡️  "
			  << "DiamondTrap " << this->_name << " copy constructed."
			  << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "💎💣 "
			  << "DiamondTrap " << this->_name << " destroyed."
			  << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	if (DEBUG)
		std::cout << "💎🗜️  "
				  << "Copy assignment operator called on DiamondTrap "
				  << this->_name << "." << std::endl;
	return (*this);
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "💎👤 "
			  << "DiamondTrap " << this->_name << " is actually ClapTrap " << ClapTrap::_name
			  << "." << std::endl;
}

std::string DiamondTrap::getName(void) const
{
	return (this->_name);
}

unsigned int DiamondTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int DiamondTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int DiamondTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

std::ostream &operator<<(std::ostream &o, DiamondTrap const &rhs)
{
	o << "💎👤 "
	  << "DiamondTrap " << rhs.getName() << " has " << rhs.getHitPoints() << " hit points, "
	  << rhs.getEnergyPoints() << " energy points and "
	  << rhs.getAttackDamage() << " attack damage."
	  << std::endl;
	return (o);
}
