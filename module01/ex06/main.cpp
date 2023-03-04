/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:56:47 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 20:57:20 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "Usage: " << argv[0] << " LEVEL"
				  << std::endl,
			exit(EXIT_FAILURE);
	{
		Harl _harl;

		_harl.complain(argv[1]);
	}
	return EXIT_SUCCESS;
}
