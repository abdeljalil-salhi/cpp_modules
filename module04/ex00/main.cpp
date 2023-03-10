/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:01:44 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:10:53 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal *_animal = new Animal();
		std::cout << std::endl;

		const Animal *_dog = new Dog();
		std::cout << std::endl;

		const Animal *_cat = new Cat();
		std::cout << std::endl;

		_dog->makeSound(), std::cout << std::endl;

		_cat->makeSound(), std::cout << std::endl;

		_animal->makeSound(), std::cout << std::endl;

		delete _dog;
		delete _cat;
		delete _animal;
	}
	std::cout << std::endl
			  << "------------------------" << std::endl
			  << std::endl;
	{
		const WrongAnimal *_wrongAnimal = new WrongAnimal();
		std::cout << std::endl;

		const WrongAnimal *_wrongDog = new WrongCat();
		std::cout << std::endl;

		_wrongDog->makeSound(), std::cout << std::endl;

		_wrongAnimal->makeSound(), std::cout << std::endl;

		delete _wrongDog;
		delete _wrongAnimal;
	}
	return EXIT_SUCCESS;
}