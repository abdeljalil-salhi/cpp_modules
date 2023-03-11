/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 00:04:08 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 06:58:57 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "👝  "
			  << "Materia Source created."
			  << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	std::cout << "👝  "
			  << "Materia Source created by copy."
			  << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "💭  "
			  << "Materia Source destroyed."
			  << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
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

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
	{
		std::cout << "❌  "
				  << "Materia is NULL."
				  << std::endl;
		return;
	}

	int i = -1;
	while (this->_inventory[++i] && i < 4)
		;
	if (i >= 4)
	{
		std::cout << "❌  "
				  << "Materia Source is full."
				  << std::endl;
		return;
	}
	this->_inventory[i] = m;
	std::cout << "👝  "
			  << "Materia " << m->getType() << " learned."
			  << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = -1;
	while (this->_inventory[++i] &&
		   this->_inventory[i]->getType() != type && i < 4)
		;
	if (4 <= i || !this->_inventory[i])
	{
		std::cout << "❌  "
				  << "Materia " << type << " not found in Materia Source."
				  << std::endl;
		return NULL;
	}
	std::cout << "👝  "
			  << "Materia " << type << " created from Materia Source."
			  << std::endl;
	return this->_inventory[i]->clone();
}
