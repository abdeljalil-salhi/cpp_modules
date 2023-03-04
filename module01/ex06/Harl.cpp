/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:48:50 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 20:58:09 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	if (DEBUG)
		std::cout << "Harl constructed." << std::endl;
}

Harl::~Harl(void)
{
	if (DEBUG)
		std::cout << "Harl destructed." << std::endl;
}

void Harl::complain(std::string level)
{
	for (size_t i = 0; i < level.length(); i++)
		level[i] = toupper(level[i]);

	std::string _levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = -1;
	while (++i < 4)
		if (level == _levels[i])
			break;

	switch (i)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		this->debug();
		std::cout << std::endl;
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		this->info();
		std::cout << std::endl;
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		this->warning();
		std::cout << std::endl;
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		this->error();
		std::cout << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]"
				  << std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-specialketchup burger."
			  << std::endl
			  << "I really do!"
			  << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
			  << std::endl
			  << "You didn't put enough bacon in my burger!"
			  << std::endl
			  << "If you did, I wouldn't be asking for more!"
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
			  << std::endl
			  << "I've been coming for "
			  << "years whereas you started working here since last month."
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable!"
			  << std::endl
			  << "I want to speak to the manager now."
			  << std::endl;
}
