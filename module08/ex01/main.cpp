/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:16:03 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 22:29:16 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

int main(void)
{
	try
	{
		std::cout << "Testing with 5 numbers" << std::endl
				  << std::endl;

		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp << std::endl;

		std::cout << GREEN << "sp.shortestSpan()\t" << RESET
				  << sp.shortestSpan() << std::endl;
		std::cout << GREEN << "sp.longestSpan()\t" << RESET
				  << sp.longestSpan() << std::endl;

		sp.addNumber(11);
		std::cout << "Exception not thrown" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "----- " << e.what() << RESET << std::endl;
	}
	try
	{
		std::cout << std::endl
				  << "Testing with 10000 numbers" << std::endl
				  << std::endl;

		Span spp = Span(10000);
		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
			v.push_back(i);
		spp.addRange(v.begin(), v.end());
		std::cout << GREEN << "sp.shortestSpan()\t" << RESET
				  << spp.shortestSpan() << std::endl;
		std::cout << GREEN << "sp.longestSpan()\t" << RESET
				  << spp.longestSpan() << std::endl;

		std::cout << GREEN << "----- OK" << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return EXIT_SUCCESS;
}
