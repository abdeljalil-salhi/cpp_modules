/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:58:44 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/09 21:14:41 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap i("Lilia");
	std::cout << std::endl;
	DiamondTrap j(i);
	std::cout << std::endl;

	std::cout << i << std::endl;
	std::cout << j << std::endl;

	for (int _ = 0; _ < 50; _++)
		i.beRepaired(10);

	std::cout << std::endl, i.attack("Tyrex"), std::cout << std::endl;

	i.takeDamage(10), std::cout << std::endl;
	i.guardGate(), std::cout << std::endl;
	i.highFivesGuys(), std::cout << std::endl;
	i.whoAmI(), std::cout << std::endl;
	
	return EXIT_SUCCESS;
}
