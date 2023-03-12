/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 07:47:23 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 09:37:41 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int main(void)
{
	{
		std::cout << std::endl
				  << GREEN << "RobotomyRequestForm testing:" << RESET << std::endl;

		Intern _someRandomIntern;
		Bureaucrat _someRandomBureaucrat("Bureaucrat", 1);
		RobotomyRequestForm *_rrf;
		_rrf = (RobotomyRequestForm *)_someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *_rrf;
		_rrf->beSigned(_someRandomBureaucrat);
		_rrf->execute(_someRandomBureaucrat);
		delete _rrf;
	}
	{
		std::cout << std::endl
				  << GREEN << "ShrubberyCreationForm testing:" << RESET << std::endl;

		Intern _someRandomIntern;
		Bureaucrat _someRandomBureaucrat("Bureaucrat", 1);
		ShrubberyCreationForm *_scf;
		_scf = (ShrubberyCreationForm *)_someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *_scf;
		_scf->beSigned(_someRandomBureaucrat);
		_scf->execute(_someRandomBureaucrat);
		delete _scf;
	}
	{
		std::cout << std::endl
				  << GREEN << "PresidentialPardonForm testing:" << RESET << std::endl;

		Intern _someRandomIntern;
		Bureaucrat _someRandomBureaucrat("Bureaucrat", 1);
		PresidentialPardonForm *_ppf;
		_ppf = (PresidentialPardonForm *)_someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << *_ppf;
		_ppf->beSigned(_someRandomBureaucrat);
		_ppf->execute(_someRandomBureaucrat);
		delete _ppf;
	}
	{
		std::cout << std::endl
				  << GREEN << "Unknown form testing:" << RESET << std::endl;

		Intern _someRandomIntern;
		Bureaucrat _someRandomBureaucrat("Bureaucrat", 1);
		AForm *_unknownForm;
		_unknownForm = _someRandomIntern.makeForm("unknown form", "Bender");
		if (_unknownForm)
		{
			std::cout << *_unknownForm;
			_unknownForm->beSigned(_someRandomBureaucrat);
			_unknownForm->execute(_someRandomBureaucrat);
			delete _unknownForm;
		}
	}
	return EXIT_SUCCESS;
}