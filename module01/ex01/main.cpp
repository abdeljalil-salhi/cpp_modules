/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:09:33 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/03 22:19:18 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 5

int main(void)
{
	Zombie *_zombies = zombieHorde(N, "Mist");
	for (int i = 0; i < N; i++)
		_zombies[i].setName(_zombies[i].getName() + " " + std::to_string(i + 1)),
			_zombies[i].announce();
	delete[] _zombies;
	return EXIT_SUCCESS;
}
