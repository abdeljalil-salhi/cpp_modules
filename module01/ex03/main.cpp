/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:50:15 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 02:04:02 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon _club = Weapon("Crude Spiked Club");
		std::cout << std::endl;

		HumanA _bob("Bob", _club);
		std::cout << std::endl;
		_bob.attack(), std::cout << std::endl;
		_club.setType("Some other type of Club"), std::cout << std::endl;
		_bob.attack(), std::cout << std::endl;
	}
	std::cout << std::endl
			  << "-----------------" << std::endl
			  << std::endl;
	{
		Weapon _club = Weapon("Crude Spiked Club");
		std::cout << std::endl;

		HumanB _jim("Jim");
		std::cout << std::endl;
		_jim.setWeapon(_club), std::cout << std::endl;
		_jim.attack(), std::cout << std::endl;
		_club.setType("Some other type of Club"), std::cout << std::endl;
		_jim.attack(), std::cout << std::endl;
	}
	return EXIT_SUCCESS;
}
