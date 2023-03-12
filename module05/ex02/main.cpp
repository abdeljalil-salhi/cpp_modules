/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 07:47:23 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 08:57:51 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int main(void)
{
	{
		std::cout << std::endl
				  << GREEN << "Shruberry Creation Form:" << RESET << std::endl;
		try
		{
			Bureaucrat bureaucrat("Zoe", 1);
			Bureaucrat bureaucrat2("Thresh", 150);
			ShrubberyCreationForm form("home");
			std::cout << form << std::endl;
			bureaucrat.signForm(form);
			bureaucrat.executeForm(form);
			bureaucrat2.executeForm(form);

			std::cout << std::endl
					  << "Attempting with a bureaucrat with a grade of 150:" << std::endl;
			form.execute(bureaucrat2);
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}

	{
		std::cout << std::endl
				  << GREEN << "Robotomy Request Form:" << RESET << std::endl;
		try
		{
			Bureaucrat bureaucrat("Zoe", 1);
			Bureaucrat bureaucrat2("Thresh", 150);
			RobotomyRequestForm form("home");
			std::cout << form << std::endl;
			bureaucrat.signForm(form);
			bureaucrat.executeForm(form);
			bureaucrat2.executeForm(form);

			std::cout << std::endl
					  << "Attempting with a bureaucrat with a grade of 150:" << std::endl;
			form.execute(bureaucrat2);
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}

	{
		std::cout << std::endl
				  << GREEN << "Presidential Pardon Form:" << RESET << std::endl;
		try
		{
			Bureaucrat bureaucrat("Zoe", 1);
			Bureaucrat bureaucrat2("Thresh", 150);
			PresidentialPardonForm form("home");
			std::cout << form << std::endl;
			bureaucrat.signForm(form);
			bureaucrat.executeForm(form);
			bureaucrat2.executeForm(form);

			std::cout << std::endl
					  << "Attempting with a bureaucrat with a grade of 150:" << std::endl;
			form.execute(bureaucrat2);
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	return EXIT_SUCCESS;
}