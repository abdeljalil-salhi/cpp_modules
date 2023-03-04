/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:09:33 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/03 22:01:31 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *_thresh = newZombie("Thresh");
	_thresh->announce();
	delete _thresh;
	randomChump("Mordekaiser");
	return EXIT_SUCCESS;
}
