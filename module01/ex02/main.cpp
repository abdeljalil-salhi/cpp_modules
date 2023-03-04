/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:09:33 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/03 22:33:54 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << std::endl;
	std::cout << "The memory address of the string variable : "
			  << &string << std::endl;
	std::cout << "The memory address held by stringPTR      : "
			  << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF      : "
			  << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable          : "
			  << string << std::endl;
	std::cout << "The value pointed to by stringPTR         : "
			  << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF         : "
			  << stringREF << std::endl;
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
