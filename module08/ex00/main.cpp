/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:36:54 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 21:13:40 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

int main(void)
{
	try
	{
		std::vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		v.push_back(3);

		std::cout << "easyfind(v, 3)\t";
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << GREEN << *it << RESET << std::endl;

		std::cout << "easyfind(v, 17)\t";
		std::vector<int>::iterator ite = easyfind(v, 17);
		std::cout << GREEN << *ite << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return EXIT_SUCCESS;
}
