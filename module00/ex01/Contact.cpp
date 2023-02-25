/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:54:47 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/25 17:09:28 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

/*
** Default constructor
*/
Contact::Contact(void)
{
	if (DEBUG)
		std::cout << "Contact created" << std::endl;
}

/*
** Parameterized constructor
*/
Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
				 std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	if (DEBUG)
		std::cout << "Contact created" << std::endl;
}

/*
** Destructor
*/
Contact::~Contact(void)
{
	if (DEBUG)
		std::cout << "Contact destroyed" << std::endl;
}

/*
** Function to get the first name of a contact
*/
std::string Contact::getFirstName(void)
{
	return this->first_name;
}

/*
** Function to get the last name of a contact
*/
std::string Contact::getLastName(void)
{
	return this->last_name;
}

/*
** Function to get the nickname of a contact
*/
std::string Contact::getNickname(void)
{
	return this->nickname;
}

/*
** Function to get the phone number of a contact
*/
std::string Contact::getPhoneNumber(void)
{
	return this->phone_number;
}

/*
** Function to get the darkest secret of a contact
*/
std::string Contact::getDarkestSecret(void)
{
	return this->darkest_secret;
}
