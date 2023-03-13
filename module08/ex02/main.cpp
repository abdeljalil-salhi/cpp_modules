/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:17:59 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 23:36:47 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

int main()
{
	{
		std::cout << std::endl
				  << GREEN << "----------- Mutant Stack Base -----------" << RESET
				  << std::endl
				  << std::endl;

		MutantStack<int> _stack;

		_stack.push(5);
		_stack.push(17);

		std::cout << "Top\t:\t" << _stack.top();

		_stack.pop(), std::cout << RED << "\tPop" << RESET << std::endl;
		std::cout << "Top\t:\t" << _stack.top() << std::endl;
		std::cout << "Size\t:\t" << _stack.size() << std::endl;

		_stack.push(3);
		_stack.push(5);
		_stack.push(737);
		_stack.push(0);

		std::cout << std::endl
				  << GREEN << "----------- Mutant Stack Iterator -----------" << RESET
				  << std::endl
				  << std::endl;

		for (MutantStack<int>::iterator it = _stack.begin();
			 it != _stack.end();
			 it++)
			std::cout << "Value\t:\t" << *it << std::endl;
	}
	{
		std::cout << std::endl
				  << GREEN << "----------- List Base -----------" << RESET
				  << std::endl
				  << std::endl;

		std::list<int> _list;

		_list.push_back(5);
		_list.push_back(17);

		std::cout << "Top\t:\t" << _list.back();

		_list.pop_back(), std::cout << RED << "\tPop" << RESET << std::endl;
		std::cout << "Top\t:\t" << _list.back() << std::endl;
		std::cout << "Size\t:\t" << _list.size() << std::endl;

		_list.push_back(3);
		_list.push_back(5);
		_list.push_back(737);
		_list.push_back(0);

		std::cout << std::endl
				  << GREEN << "----------- List Iterator -----------" << RESET
				  << std::endl
				  << std::endl;

		for (std::list<int>::iterator it = _list.begin();
			 it != _list.end();
			 it++)
			std::cout << "Value\t:\t" << *it << std::endl;
	}
	{
		std::cout << std::endl
				  << GREEN << "----------- Preparing Copy Constructor -----------" << RESET
				  << std::endl
				  << std::endl;

		MutantStack<int> _stack;

		_stack.push(5);
		_stack.push(17);

		std::cout << "Top\t:\t" << _stack.top();

		_stack.pop(), std::cout << RED << "\tPop" << RESET << std::endl;
		std::cout << "Top\t:\t" << _stack.top() << std::endl;
		std::cout << "Size\t:\t" << _stack.size() << std::endl;

		_stack.push(3);
		_stack.push(5);
		_stack.push(737);
		_stack.push(0);

		MutantStack<int> _copy(_stack);

		std::cout << std::endl
				  << GREEN << "----------- Copy Constructor Iterator -----------" << RESET
				  << std::endl
				  << std::endl;

		for (MutantStack<int>::iterator it = _copy.begin();
			 it != _copy.end();
			 it++)
			std::cout << "Value\t:\t" << *it << std::endl;
	}
	return EXIT_SUCCESS;
}
