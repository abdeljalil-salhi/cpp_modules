/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:57:22 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/07 00:40:05 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a    : " << a << std::endl;
	std::cout << "++a  : " << ++a << std::endl;
	std::cout << "a    : " << a << std::endl;
	std::cout << "a++  : " << a++ << std::endl;
	std::cout << "a    : " << a << std::endl;
	std::cout << "b    : " << b << std::endl;
	std::cout << "MIN  : " << Fixed::min(a, b) << std::endl;
	std::cout << "MAX  : " << Fixed::max(a, b) << std::endl
			  << std::endl;

	/* Run-time error */
	// std::cout << a / 0 << std::endl;

	std::cout << "a >  b  ";
	(a > b) ? std::cout << "true" << std::endl
			: std::cout << "false" << std::endl;
	std::cout << "a == b  ";
	(a == b) ? std::cout << "true" << std::endl
			 : std::cout << "false" << std::endl;
	std::cout << "a != b  ";
	(a != b) ? std::cout << "true" << std::endl
			 : std::cout << "false" << std::endl;
	std::cout << "a <  b  ";
	(a < b) ? std::cout << "true" << std::endl
			: std::cout << "false" << std::endl;

	return EXIT_SUCCESS;
}
