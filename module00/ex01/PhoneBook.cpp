/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:59:23 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/25 17:07:04 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

/*
** Function to truncate strings to 10 characters
*/
static std::string trunc(std::string str)
{
	return ((str.length() > 10) ? str.substr(0, 9) + "." : str);
}

/*
** Default constructor
*/
PhoneBook::PhoneBook(void)
{
	this->i_contacts = 0;
	this->n_contacts = 0;
	if (DEBUG)
		std::cout << "PhoneBook created" << std::endl;
}

/*
** Destructor
*/
PhoneBook::~PhoneBook(void)
{
	if (DEBUG)
		std::cout << "PhoneBook destroyed" << std::endl;
}

/*
** Function to add a contact to the phonebook
*/
void PhoneBook::add(void)
{
	std::string first_name, last_name, nickname, phone_number, darkest_secret;

	std::cout << std::endl;
	std::cout << "    First name: ";
	std::cin.ignore();
	std::getline(std::cin, first_name);
	if (std::cin.eof())
		return;
	std::cout << "    Last name: ";
	std::getline(std::cin, last_name);
	if (std::cin.eof())
		return;
	std::cout << "    Nickname: ";
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		return;
	std::cout << "    Phone number: ";
	std::getline(std::cin, phone_number);
	if (std::cin.eof())
		return;
	std::cout << "    Darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof())
		return;
	this->contacts[this->i_contacts] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	(this->i_contacts < 7)
		? this->i_contacts++
		: this->i_contacts = 0;
	(this->n_contacts < 8) && (this->n_contacts++);
	std::cout << std::endl;
}

/*
** Function to search for a contact in the phonebook
*/
void PhoneBook::search(void)
{
	size_t i;
	int index;

	std::cout << std::endl;
	std::cout << std::right << std::setw(10) << "Index"
			  << " | ";
	std::cout << std::right << std::setw(10) << "First name"
			  << " | ";
	std::cout << std::right << std::setw(10) << "Last name"
			  << " | ";
	std::cout << std::right << std::setw(10) << "Nickname"
			  << std::endl;
	i = -1;
	while (++i < this->n_contacts)
	{
		std::cout << std::right << std::setw(10) << i
				  << " | ";
		std::cout << std::right << std::setw(10) << trunc(this->contacts[i].getFirstName())
				  << " | ";
		std::cout << std::right << std::setw(10) << trunc(this->contacts[i].getLastName())
				  << " | ";
		std::cout << std::right << std::setw(10) << trunc(this->contacts[i].getNickname())
				  << std::endl;
	}
	std::cout << std::endl;

	std::cout << "    index> ";
	std::cin.ignore();
	std::cin >> index;
	if (std::cin.eof())
		exit(0);
	std::cout << std::endl;
	if (index >= 0 && index < (int)this->n_contacts)
	{
		std::cout << "    First name: " << this->contacts[index].getFirstName() << std::endl;
		std::cout << "    Last name: " << this->contacts[index].getLastName() << std::endl;
		std::cout << "    Nickname: " << this->contacts[index].getNickname() << std::endl;
		std::cout << "    Phone number: " << this->contacts[index].getPhoneNumber() << std::endl;
		std::cout << "    Darkest secret: " << this->contacts[index].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "    Invalid index" << std::endl;
	std::cout << std::endl;
}
