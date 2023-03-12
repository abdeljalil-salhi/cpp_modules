/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 08:02:46 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 09:33:34 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("Robotomy Request", 72, 45), _target(target)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm " << this->_target << " constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs)
	: AForm(rhs), _target(rhs.getTarget())
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm " << this->_target << " copy constructed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm " << this->_target << " destroyed." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	(executor.getGrade() > this->getExecutionGrade())
		? throw AForm::GradeTooLowException()
	: (this->getIsSigned() == false)
		? throw AForm::FormNotSignedException()
		: NULL;

	srand(time(nullptr));
	(rand() % 2)
		? std::cout << "RobotomyRequestForm " << this->_target
					<< " has been robotomized successfully." << std::endl
		: std::cout << "RobotomyRequestForm " << this->_target
					<< " has failed to be robotomized." << std::endl;

	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs)
{
	o << "Robotomy Request Form '" << rhs.getName() << "' is "
	  << (rhs.getIsSigned() ? "signed" : "unsigned")
	  << ", has a target of " << rhs.getTarget()
	  << ", requires a grade of " << rhs.getSignGrade()
	  << " to be signed and a grade of " << rhs.getExecutionGrade()
	  << " to be executed." << std::endl;
	return o;
}
