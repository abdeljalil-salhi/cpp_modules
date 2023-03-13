/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:21:52 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 17:48:06 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

int main(void)
{
	Array<int> _a(5);

	std::cout << GREEN << "_a: " << RESET;
	for (int i = 0; i < 5; i++)
		std::cout << _a[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		_a[i] = i;
	std::cout << GREEN << "_a: " << RESET;
	for (int i = 0; i < 5; i++)
		std::cout << _a[i] << " ";
	std::cout << std::endl;

	Array<int> _defaultArray;
	Array<std::string> _basicArray(10);
	Array<std::string> _basicArrayCopy;

	for (size_t i = 0; i < _basicArray.size(); i++)
		_basicArray[i] = "Hi";
	std::cout << GREEN << "_defaultArray.size() = " << RESET
			  << _defaultArray.size() << std::endl;
	std::cout << GREEN << "_basicArray.size() = " << RESET
			  << _basicArray.size() << std::endl;
	_basicArrayCopy = _basicArray;
	_basicArrayCopy[3] = "Hello";

	std::cout << GREEN << "_basicArrayCopy: " << RESET
			  << std::endl
			  << "\t";
	for (size_t i = 0; i < _basicArrayCopy.size(); i++)
		std::cout << _basicArrayCopy[i] << GREEN
				  << ((i != _basicArrayCopy.size() - 1) ? " - " : "")
				  << RESET;
	std::cout << std::endl;

	try
	{
		std::cout << GREEN << "_basicArray[1337] = " << RESET;
		std::cout << _basicArray[1337] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	try
	{
		std::cout << GREEN << "_defaultArray[0] = " << RESET;
		std::cout << _defaultArray[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	return EXIT_SUCCESS;
}
