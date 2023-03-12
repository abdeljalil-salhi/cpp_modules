/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:38:59 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 20:45:38 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	srand(time(nullptr));
	switch (rand() % 3)
	{
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	default:
		return nullptr;
	}
}
