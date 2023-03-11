/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 00:10:00 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 06:55:32 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int main()
{
	std::cout << std::endl;
	std::cout << GREEN << "Constructors:" << RESET << std::endl;
	std::cout << GREEN << "-------------" << RESET << std::endl;
	std::cout << std::endl;

	IMateriaSource *_materiaSrc = new MateriaSource();
	std::cout << std::endl;

	_materiaSrc->learnMateria(new Ice()), std::cout << std::endl;
	_materiaSrc->learnMateria(new Cure()), std::cout << std::endl;

	ICharacter *_hero = new Character("hero");

	std::cout << std::endl
			  << std::endl;

	std::cout << GREEN << "Materia creation:" << RESET << std::endl;
	std::cout << GREEN << "-----------------" << RESET << std::endl;
	std::cout << std::endl;

	AMateria *_tmp2, *_tmp3, *_tmp4;
	std::cout << std::endl;

	AMateria *_tmp = _materiaSrc->createMateria("ice");
	std::cout << std::endl;
	_hero->equip(_tmp), std::cout << std::endl;

	AMateria *_cure = _materiaSrc->createMateria("cure");
	std::cout << std::endl;
	_hero->equip(_cure), std::cout << std::endl;

	_tmp = _materiaSrc->createMateria("fire");
	std::cout << std::endl;
	_hero->equip(_tmp), std::cout << std::endl;

	std::cout << std::endl;

	std::cout << GREEN << "use() on a new character:" << RESET << std::endl;
	std::cout << GREEN << "-------------------------" << RESET << std::endl;
	std::cout << std::endl;

	ICharacter *_zoe = new Character("Zoe");
	std::cout << std::endl;

	_hero->use(0, *_zoe), std::cout << std::endl,
		_hero->use(1, *_zoe), std::cout << std::endl;

	_hero->use(2, *_zoe), _hero->use(-4, *_zoe), _hero->use(18, *_zoe);
	std::cout << std::endl
			  << std::endl;

	std::cout << GREEN << "Deep copy a Character:" << RESET << std::endl;
	std::cout << GREEN << "----------------------" << RESET << std::endl;
	std::cout << std::endl;

	Character *_thresh = new Character("Thresh");
	std::cout << std::endl;

	_tmp2 = _materiaSrc->createMateria("cure"), std::cout << std::endl;
	_thresh->equip(_tmp2), std::cout << std::endl;
	_tmp3 = _materiaSrc->createMateria("ice"), std::cout << std::endl;
	_thresh->equip(_tmp3), std::cout << std::endl;
	_tmp = _materiaSrc->createMateria("earth"), std::cout << std::endl;
	_thresh->equip(_tmp), std::cout << std::endl;

	Character *_threshCopy = new Character(*_thresh);
	std::cout << std::endl;

	std::cout << GREEN << "Deep copy VS Source:" << RESET << std::endl;
	std::cout << GREEN << "--------------------" << RESET << std::endl;
	std::cout << std::endl;

	_thresh->unequip(0), std::cout << std::endl;

	/*
		This will produce a leak if we don't store the address
		of the materia in a variable and delete it after.
	*/
	_tmp4 = _threshCopy->getMateriaFromInventory(1), std::cout << std::endl;
	_threshCopy->unequip(1), std::cout << std::endl;
	delete _tmp4, std::cout << std::endl;

	_tmp = _materiaSrc->createMateria("cure"), std::cout << std::endl;
	_threshCopy->equip(_tmp), std::cout << std::endl;

	_tmp = _materiaSrc->createMateria("ice"), std::cout << std::endl;
	_threshCopy->equip(_tmp), std::cout << std::endl;

	_thresh->use(0, *_zoe), _thresh->use(1, *_zoe),
		_thresh->use(2, *_zoe), _thresh->use(3, *_zoe),
		std::cout << std::endl;

	_threshCopy->use(0, *_zoe), _threshCopy->use(1, *_zoe),
		_threshCopy->use(2, *_zoe), _threshCopy->use(3, *_zoe),
		std::cout << std::endl;

	std::cout << GREEN << "Unequip:" << RESET << std::endl;
	std::cout << GREEN << "--------" << RESET << std::endl;
	std::cout << std::endl;

	_hero->unequip(-1), _hero->unequip(18), _hero->unequip(3),
		std::cout << std::endl;

	_hero->use(1, *_thresh), std::cout << std::endl;
	_hero->unequip(1), std::cout << std::endl;
	_hero->use(1, *_thresh), std::cout << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "Destructors:" << RESET << std::endl;
	std::cout << GREEN << "------------" << RESET << std::endl;
	std::cout << std::endl;

	delete _zoe, std::cout << std::endl;
	delete _hero, std::cout << std::endl;
	delete _materiaSrc, std::cout << std::endl;
	delete _thresh, std::cout << std::endl;
	delete _threshCopy, std::cout << std::endl;
	delete _tmp2, std::cout << std::endl,
		std::cout << std::endl;

	std::cout << GREEN << "Testing leaks:" << RESET << std::endl;
	std::cout << GREEN << "--------------" << RESET << std::endl;
	std::cout << std::endl;

	system("leaks interface_and_recap");

	return EXIT_SUCCESS;
}
