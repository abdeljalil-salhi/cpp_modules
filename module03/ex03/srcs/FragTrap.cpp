/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:30:12 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/09 21:11:00 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	: ClapTrap()
{
	this->_hitPoints = 100;
	(this->_energyPoints == 10) && (this->_energyPoints = 100);
	this->_attackDamage = 30;
	std::cout << "🔴🛡️  "
			  << "FragTrap " << this->_name << " constructed."
			  << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	this->_hitPoints = 100;
	(this->_energyPoints == 10) && (this->_energyPoints = 100);
	this->_attackDamage = 30;
	std::cout << "🔴🛡️  "
			  << "FragTrap " << this->_name << " constructed."
			  << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs)
	: ClapTrap(rhs)
{
	std::cout << "🔴🛡️  "
			  << "FragTrap " << this->_name << " copy constructed."
			  << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "🔴💣 "
			  << "FragTrap " << this->_name << " destroyed."
			  << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	if (DEBUG)
		std::cout << "🔴🗜️  "
				  << "Copy assignment operator called on FragTrap "
				  << this->_name << "." << std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "🔴✋ "
			  << "FragTrap " << this->_name << " requests a high five."
			  << std::endl;
}
