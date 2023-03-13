/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:40:30 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 17:26:58 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

int main()
{
	{
		float A = 21.12f, B = 42.24f;

		std::cout << "The " << GREEN << "max" << RESET << " of a: " << A << " and b: " << B << " is:"
				  << "\t" << max(A, B) << std::endl;
		std::cout << "The " << GREEN << "min" << RESET << " of a: " << A << " and b: " << B << " is:"
				  << "\t" << min(A, B) << std::endl
				  << std::endl;
		std::cout << GREEN << "before:" << RESET << std::endl
				  << RED "\ta: " << RESET << A << std::endl
				  << RED "\tb: " << RESET << B << std::endl;
		swap(A, B);
		std::cout << GREEN << "after:" << RESET << std::endl
				  << RED "\ta: " << RESET << A << std::endl
				  << RED "\tb: " << RESET << B << std::endl;
	}
	std::cout << std::endl
			  << "------------------------------------------------------------------" << std::endl
			  << std::endl;
	{
		std::string A = "String A", B = "String B";

		std::cout << "The " << GREEN << "max" << RESET << " of a: " << A << " and b: " << B << " is:"
				  << "\t" << ::max(A, B) << std::endl;
		std::cout << "The " << GREEN << "min" << RESET << " of a: " << A << " and b: " << B << " is:"
				  << "\t" << ::min(A, B) << std::endl
				  << std::endl;
		std::cout << GREEN << "before:" << RESET << std::endl
				  << RED "\ta: " << RESET << A << std::endl
				  << RED "\tb: " << RESET << B << std::endl;
		::swap(A, B);
		std::cout << GREEN << "after:" << RESET << std::endl
				  << RED "\ta: " << RESET << A << std::endl
				  << RED "\tb: " << RESET << B << std::endl;
	}
	return EXIT_SUCCESS;
}
