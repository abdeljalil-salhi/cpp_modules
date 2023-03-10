/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:01:44 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 04:57:19 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// const Animal* _animal = new Animal();
	// std::cout << std::endl;
	const Animal *_dog = new Dog();
	std::cout << std::endl;
	const Animal *_cat = new Cat();
	std::cout << std::endl;

	_cat->makeSound(), std::cout << std::endl;
	_dog->makeSound(), std::cout << std::endl;

	// delete _animal, std::cout << std::endl;
	delete _dog, std::cout << std::endl;
	delete _cat, std::cout << std::endl;

	return EXIT_SUCCESS;
}