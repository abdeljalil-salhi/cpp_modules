/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:06:47 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 03:28:44 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int main(void)
{
	{
		std::cout << std::endl
				  << GREEN << "Test 1: Decrementing above 150"
				  << RESET << std::endl;
		try
		{
			Bureaucrat bureaucrat("Zoe", 150);
			std::cout << bureaucrat;

			bureaucrat.incrementGrade(), std::cout << bureaucrat;
			bureaucrat.decrementGrade(), std::cout << bureaucrat;
			bureaucrat.decrementGrade(), std::cout << bureaucrat;

			std::cout << std::endl
					  << "Exception not thrown..." << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl
			  << GREEN << "Test 2: Incrementing below 1"
			  << RESET << std::endl;
	{
		try
		{
			Bureaucrat bureaucrat("Thresh", 1);
			std::cout << bureaucrat;

			bureaucrat.decrementGrade(), std::cout << bureaucrat;
			bureaucrat.incrementGrade(), std::cout << bureaucrat;
			bureaucrat.incrementGrade(), std::cout << bureaucrat;

			std::cout << std::endl
					  << "Exception not thrown..." << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl
			  << GREEN << "Test 3: Grade too high during construction"
			  << RESET << std::endl;
	{
		try
		{
			std::cout << "Constructing Lilia with grade 0..." << std::endl;
			Bureaucrat bureaucrat("Lilia", 0);
			std::cout << bureaucrat;

			std::cout << std::endl
					  << "Exception not thrown..." << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl
			  << GREEN << "Test 4: Grade too low during construction"
			  << RESET << std::endl;
	{
		try
		{
			std::cout << "Constructing Morgana with grade 151..." << std::endl;
			Bureaucrat bureaucrat("Morgana", 151);
			std::cout << bureaucrat;

			std::cout << std::endl
					  << "Exception not thrown..." << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}

	return EXIT_SUCCESS;
}
