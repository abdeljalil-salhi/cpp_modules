/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:54:47 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/28 15:29:51 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	if (DEBUG)
		std::cout << "Contact created" << std::endl;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname,
				 std::string phoneNumber, std::string darkestSecret)
	: _firstName(firstName), _lastName(lastName), _nickname(nickname),
	  _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
	if (DEBUG)
		std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{
	if (DEBUG)
		std::cout << "Contact destroyed" << std::endl;
}

std::string Contact::getFirstName(void)
{
	return this->_firstName;
}

std::string Contact::getLastName(void)
{
	return this->_lastName;
}

std::string Contact::getNickname(void)
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber(void)
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(void)
{
	return this->_darkestSecret;
}
