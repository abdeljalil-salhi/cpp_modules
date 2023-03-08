/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:58:44 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/08 22:35:10 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	{
		ScavTrap i("Vex");
		std::cout << std::endl;

		ScavTrap j(i);
		j.setName("Tyrex"), std::cout << std::endl;

		j.attack("Zoe"), std::cout << std::endl;

		i.takeDamage(9), i.takeDamage(5), i.takeDamage(5), i.takeDamage(81), i.takeDamage(1),
			std::cout << std::endl;

		i.beRepaired(5), std::cout << std::endl;
		i.beRepaired(5), std::cout << std::endl;
		i.beRepaired(5), std::cout << std::endl;
		j.beRepaired(10), std::cout << std::endl;
	}
	std::cout << std::endl
			  << "--------------------" << std::endl
			  << std::endl;
	{
		ScavTrap i("Zoe");
		std::cout << std::endl;

		for (int _ = 0; _ < 50; _++)
			i.attack("Tyrex");
		i.attack("Tyrex"), std::cout << std::endl;

		i.guardGate(), std::cout << std::endl;
		i.guardGate(), std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}
