/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:58:44 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/08 22:41:37 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap i("Vex");
		std::cout << std::endl;

		ClapTrap j(i);
		j.setName("Tyrex"), std::cout << std::endl;

		j.attack("Zoe"), std::cout << std::endl;

		i.takeDamage(9), i.takeDamage(5), i.takeDamage(5),
			std::cout << std::endl;

		i.beRepaired(5), std::cout << std::endl;
		j.beRepaired(10), std::cout << std::endl;
	}
	std::cout << std::endl
			  << "--------------------" << std::endl
			  << std::endl;
	{
		ClapTrap i("Zoe");
		std::cout << std::endl;

		for (int _ = 0; _ < 10; _++)
			i.attack("Tyrex");
		i.attack("Tyrex"), std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}
