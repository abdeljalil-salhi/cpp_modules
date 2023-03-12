/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:46:06 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 20:52:44 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void identify(Base *p)
{
	if (dynamic_cast<A *>(p) == NULL)
	{
		if (dynamic_cast<B *>(p) == NULL)
		{
			if (dynamic_cast<C *>(p) == NULL)
				std::cout << "Invalid" << std::endl;
			else
				std::cout << "C" << std::endl;
		}
		else
			std::cout << "B" << std::endl;
	}
	else
		std::cout << "A" << std::endl;
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			(void)dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &e)
		{
			try
			{
				(void)dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &e)
			{
				std::cout << "Invalid" << std::endl;
			}
		}
	}
}
