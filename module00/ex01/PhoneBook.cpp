/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:59:23 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/28 21:17:57 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <strstream>

/*
** Function to truncate strings to 10 characters
*/
static std::string trunc(std::string str)
{
	return ((str.length() > 10) ? str.substr(0, 9) + "." : str);
}

PhoneBook::PhoneBook(void) : _iContacts(0), _nContacts(0)
{
	if (DEBUG)
		std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	if (DEBUG)
		std::cout << "PhoneBook destroyed" << std::endl;
}

void PhoneBook::add(void)
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	std::cout << std::endl;
	std::cin.clear();
	while (true)
	{
		std::cout << "    First name: ";
		std::getline(std::cin, firstName);
		if (std::cin.eof())
			return;
		if (firstName.empty())
			std::cout << "    First name cannot be empty" << std::endl;
		else
			break;
	}
	while (true)
	{
		std::cout << "    Last name: ";
		std::getline(std::cin, lastName);
		if (std::cin.eof())
			return;
		if (lastName.empty())
			std::cout << "    Last name cannot be empty" << std::endl;
		else
			break;
	}
	while (true)
	{
		std::cout << "    Nickname: ";
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			return;
		if (nickname.empty())
			std::cout << "    Nickname cannot be empty" << std::endl;
		else
			break;
	}
	while (true)
	{
		std::cout << "    Phone number: ";
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof())
			return;
		if (phoneNumber.empty())
			std::cout << "    Phone number cannot be empty" << std::endl;
		else
			break;
	}
	while (true)
	{
		std::cout << "    Darkest secret: ";
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof())
			return;
		if (darkestSecret.empty())
			std::cout << "    Darkest secret cannot be empty" << std::endl;
		else
			break;
	}
	this->_contacts[this->_iContacts] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	(this->_iContacts < 7)
		? this->_iContacts++
		: this->_iContacts = 0;
	(this->_nContacts < 8) && (this->_nContacts++);
	std::cout << std::endl;
}

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
	while (++i < this->_nContacts)
	{
		std::cout << std::right << std::setw(10) << i
				  << " | ";
		std::cout << std::right << std::setw(10) << trunc(this->_contacts[i].getFirstName())
				  << " | ";
		std::cout << std::right << std::setw(10) << trunc(this->_contacts[i].getLastName())
				  << " | ";
		std::cout << std::right << std::setw(10) << trunc(this->_contacts[i].getNickname())
				  << std::endl;
	}
	std::cout << std::endl;

	std::string _tmp;
	std::cout << "    index> ";
	std::getline(std::cin, _tmp);
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
	// index = std::stoi(_tmp);
	std::cout << std::endl;

	std::istrstream _ss(_tmp.c_str());
	_ss >> index;

	if ((!_ss.fail() && _ss.eof()) && (index >= 0 && index < (int)this->_nContacts))
	{
		std::cout << "    First name: " << this->_contacts[index].getFirstName() << std::endl;
		std::cout << "    Last name: " << this->_contacts[index].getLastName() << std::endl;
		std::cout << "    Nickname: " << this->_contacts[index].getNickname() << std::endl;
		std::cout << "    Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
		std::cout << "    Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "    Invalid index" << std::endl;
	std::cout << std::endl;
}
