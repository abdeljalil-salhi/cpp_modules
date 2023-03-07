/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 02:49:25 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/07 22:09:54 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point const A(0, 1);
	Point const B(1, 0);
	Point const C(2, 3);
	Point const _(1, 2.1);

	if (bsp(A, B, C, _))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	return EXIT_SUCCESS;
}
