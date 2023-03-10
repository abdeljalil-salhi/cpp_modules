/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:01:44 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 03:51:22 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int main(void)
{
	const Animal *_arrayOfAnimals[4];
	std::cout << std::endl;

	std::cout << GREEN << "Filling the first half with Dog objects:" << RESET
			  << std::endl
			  << std::endl;
	for (int i = 0; i < 2; i++)
		_arrayOfAnimals[i] = new Dog(), std::cout << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "Filling the other half with Cat objects:" << RESET
			  << std::endl
			  << std::endl;
	for (int i = 2; i < 4; i++)
		_arrayOfAnimals[i] = new Cat(), std::cout << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "Directly deleting dogs and cats as Animals:" << RESET
			  << std::endl
			  << std::endl;
	for (int i = 0; i < 4; i++)
		delete _arrayOfAnimals[i], std::cout << std::endl;
	std::cout << std::endl;

	// Basic test
	// {
	// 	std::cout << GREEN << "Basic test:" << RESET
	// 			  << std::endl
	// 			  << std::endl;
	// 	const Animal *_dog = new Dog();
	// 	std::cout << std::endl;
	// 	const Animal *_cat = new Cat();
	// 	std::cout << std::endl;

	// 	delete _dog, delete _cat, std::cout << std::endl;
	// }

	// Test deep copy
	// {
	// 	std::cout << GREEN << "Testing deep copy:" << RESET
	// 			  << std::endl
	// 			  << std::endl;
	// 	Dog _main;
	// 	std::cout << std::endl;
	// 	{
	// 		Dog _tmp = _main;
	// 		std::cout << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	std::string *_ideas = _main.getBrain()->getIdeas();
	// 	std::cout << "🧠  Brain ideas: " << std::endl
	// 			  << std::endl;
	// 	for (int i = 0; i < 10; i++)
	// 		std::cout << "    " << _ideas[i] << std::endl;
	// 	std::cout << std::endl;
	// }
	// std::cout << std::endl
	// 		  << std::endl;

	// Test leaks
	// std::cout << GREEN << "Testing leaks:" << RESET
	// 		  << std::endl
	// 		  << std::endl;
	// system("leaks i_dont_want_to_set_the_world_on_fire");

	return EXIT_SUCCESS;
}