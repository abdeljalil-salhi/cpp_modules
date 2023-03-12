/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:17:33 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 20:24:59 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#define GREEN "\033[32m"
#define RESET "\033[0m"

int main(void)
{
	{
		std::cout << GREEN << "Basic tests: " << RESET << std::endl;
	}
	Data *_data = new Data();
	Serializer _serializer;
	uintptr_t _raw = _serializer.serialize(_data);
	Data *_data2 = _serializer.deserialize(_raw);
	std::cout << "data: " << _data << std::endl;
	std::cout << "data2: " << _data2 << std::endl;
	{
		std::cout << GREEN << "Random tests: " << RESET << std::endl;
		Data *_data = new Data();
		Serializer _serializer;
		uintptr_t _raw = _serializer.serialize(_serializer.deserialize(_serializer.serialize(_data)));
		Data *_data2 = _serializer.deserialize(_raw);
		std::cout << "data: " << _data << std::endl;
		std::cout << "data2: " << _data2 << std::endl;
	}
	return 0;
}
