/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 08:27:07 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 09:00:28 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("Presidential Pardon", 25, 5), _target(target)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm " << this->_target << " constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs)
	: AForm(rhs), _target(rhs.getTarget())
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm " << this->_target << " copy constructed." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm " << this->_target << " destroyed." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	(executor.getGrade() > this->getExecutionGrade())
		? throw AForm::GradeTooLowException()
	: (this->getIsSigned() == false)
		? throw AForm::FormNotSignedException()
		: NULL;

	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs)
{
	o << "Presidential Pardon Form '" << rhs.getName() << "' is "
	  << (rhs.getIsSigned() ? "signed" : "unsigned")
	  << ", has a target of " << rhs.getTarget()
	  << ", requires a grade of " << rhs.getSignGrade()
	  << " to be signed and a grade of " << rhs.getExecutionGrade()
	  << " to be executed." << std::endl;
	return o;
}
