/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 09:11:07 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 09:23:01 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static AForm *createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm *createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *createPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Intern::Intern(void)
{
}

Intern::Intern(Intern const &rhs)
{
	(void)rhs;
}

Intern::~Intern(void)
{
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	for (size_t i = 0; i < name.length(); i++)
		name[i] = std::tolower(name[i]);

	const std::string formNames[6] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
		"shrubberycreationform",
		"robotomyrequestform",
		"presidentialpardonform"};
	AForm *(*formCreators[3])(std::string) = {
		createShrubbery,
		createRobotomy,
		createPresidential};

	for (int i = 0; i < 3; i++)
		if (name == formNames[i] || name == formNames[i + 3])
			return (std::cout << "Intern creates " << name << std::endl,
					formCreators[i](target));

	std::cout << "Intern can't create " << name << std::endl;
	return NULL;
}
