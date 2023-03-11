/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:47:16 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 04:45:27 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "🕺  "
			  << "Character " << this->_name << " spawned."
			  << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &rhs)
	: _name(rhs._name + "_copy")
{
	for (int i = 0; i < 4; i++)
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	std::cout << "🕺  "
			  << "Character " << this->_name << " spawned copying its skills"
			  << " from " << rhs._name << "."
			  << std::endl;
}

Character::~Character(void)
{
	std::cout << "☠️   "
			  << "Character " << this->_name << " died."
			  << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName(void) const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "❌  "
				  << "You can't equip a NULL materia."
				  << std::endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "🧱  "
					  << "Materia " << m->getType() << " equipped to "
					  << this->_name << "."
					  << std::endl;
			return;
		}
	}
	std::cout << "❌  "
			  << "Inventory full."
			  << std::endl;
}

void Character::unequip(int idx)
{
	if (0 <= idx && idx < 4)
	{
		if (this->_inventory[idx])
		{
			std::cout << "🧱  "
					  << "Materia " << this->_inventory[idx]->getType()
					  << " unequipped from " << this->_name
					  << " at slot " << idx << "."
					  << std::endl;
			this->_inventory[idx] = NULL;
		}
	}
	else
		std::cout << "❌  "
				  << "Invalid slot [" << idx << "]."
				  << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (0 <= idx && idx < 4)
	{
		if (this->_inventory[idx])
		{
			std::cout << "🧪  "
					  << this->_name << " uses " << this->_inventory[idx]->getType()
					  << " on " << target.getName() << "."
					  << std::endl;
			this->_inventory[idx]->use(target);
		}
		else
			std::cout << "❌  "
					  << "No materia at slot " << idx << "."
					  << std::endl;
	}
	else
		std::cout << "❌  "
				  << "Invalid slot [" << idx << "]."
				  << std::endl;
}

AMateria *Character::getMateriaFromInventory(int idx)
{
	if (0 <= idx && idx < 4)
		return this->_inventory[idx];
	else
		return NULL;
}
