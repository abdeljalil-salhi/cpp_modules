/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:19:42 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 03:05:12 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		(i % 2 == 0)
			? this->ideas[i] = "I love chicken nuggets 🍗"
			: this->ideas[i] = "I love pizza 🍕";
	if (DEBUG)
		std::cout << "🧠  "
				  << "Brain constructed."
				  << std::endl;
}

Brain::Brain(Brain const &rhs)
{
	std::string *_tmp = rhs.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = _tmp[i];
	if (DEBUG)
		std::cout << "🧠  "
				  << "Brain copy constructed."
				  << std::endl;
}

Brain::~Brain(void)
{
	delete[] this->ideas;
	if (DEBUG)
		std::cout << "🧠  "
				  << "Brain destructed."
				  << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (DEBUG)
		std::cout << "🧠  "
				  << "Copy assignment operator called on Brain."
				  << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

std::string *Brain::getIdeas(void) const
{
	return this->ideas;
}
