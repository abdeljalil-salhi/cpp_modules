/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:59:23 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/07 02:25:52 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook created" << std::endl;
	this->n_contacts = 42;
	this->addContact();
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}

void	PhoneBook::addContact(void)
{
	std::cout << this->n_contacts << " addContact" << std::endl;
	return ;
}

/* ---------------------------------------------------- */

PhoneBookInit::PhoneBookInit(char c, int n) : c(c), n(n)
{
	std::cout << "PhoneBookInit created" << std::endl;
	std::cout << "c = " << this->c << std::endl;
	std::cout << "n = " << this->n << std::endl;
	return ;
}

PhoneBookInit::~PhoneBookInit(void)
{
	std::cout << "PhoneBookInit destroyed" << std::endl;
	return ;
}
