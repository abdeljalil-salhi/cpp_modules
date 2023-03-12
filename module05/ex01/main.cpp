/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:06:47 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 04:27:21 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int main(void)
{
	{
		std::cout << std::endl
				  << GREEN << "Form 1 - EVERYTHING ALRIGHT" << RESET << std::endl;
		try
		{
			Bureaucrat bureaucrat("Zoe", 150);
			Form form("Form 1", 150, 150);
			Form form2("Form 1 (COPY)", 150, 150);
			std::cout << bureaucrat;
			std::cout << form;

			bureaucrat.signForm(form);
			form2.beSigned(bureaucrat);
			std::cout << form << form2;

			std::cout << std::endl
					  << "Exception not thrown..." << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}

	{
		std::cout << std::endl
				  << GREEN << "Form 2 - BUREAUCRAT TOO LOW" << RESET << std::endl;
		try
		{
			Bureaucrat bureaucrat("Zoe", 150);
			Form form("Form 2", 1, 150);
			Form form2(form);
			std::cout << bureaucrat;
			std::cout << form;

			bureaucrat.signForm(form);
			std::cout << form;
			std::cout << std::endl
					  << "Signing form2 directly..." << std::endl;
			form2.beSigned(bureaucrat);
			std::cout << form;

			std::cout << std::endl
					  << "Exception not thrown..." << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}

	return EXIT_SUCCESS;
}
