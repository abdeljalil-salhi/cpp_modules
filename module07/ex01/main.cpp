/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:08:42 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 10:18:18 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Array
{
public:
	Array(void) : _value(1337) {}
	~Array(void) {}
	int getValue(void) const { return this->_value; }

private:
	int _value;
};

std::ostream &operator<<(std::ostream &o, Array const &rhs)
{
	o << rhs.getValue();
	return o;
}

template <typename T>
void print(T &x)
{
	std::cout << x << std::endl;
}

int main(void)
{
	{
		int array[] = {1, 2, 3, 4, 5};
		Array array2[5];

		iter(array, 5, print);
		iter(array2, 5, print);
	}
	return EXIT_SUCCESS;
}
