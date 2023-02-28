/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:54:47 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/28 14:41:31 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	if (DEBUG)
		std::cout << "Contact created" << std::endl;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
				 std::string phone_number, std::string darkest_secret)
	: first_name(first_name), last_name(last_name), nickname(nickname),
	  phone_number(phone_number), darkest_secret(darkest_secret)
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
	return this->first_name;
}

std::string Contact::getLastName(void)
{
	return this->last_name;
}

std::string Contact::getNickname(void)
{
	return this->nickname;
}

std::string Contact::getPhoneNumber(void)
{
	return this->phone_number;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkest_secret;
}
