/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:41:35 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/28 19:59:43 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "phonebook> ";
		std::cin.clear();
		std::getline(std::cin, command);

        std::string::size_type pos;
		pos = command.find_first_not_of(" \t");
        if (pos != std::string::npos)
            command.erase(0, pos);
        pos = command.find_last_not_of(" \t");
        if (pos != std::string::npos)
            command.erase(pos + 1);
		
		if (std::cin.eof() || command == "EXIT")
			break;
		else if (command.empty())
			continue;
		else if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cout << command << ": Invalid command" << std::endl;
		if (std::cin.eof())
			break;
	}
	return (EXIT_SUCCESS);
}
