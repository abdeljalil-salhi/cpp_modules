/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:52:57 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 08:54:23 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void)
	: _name("form"), _isSigned(false),
	  _signGrade(150), _executionGrade(150)
{
}

AForm::AForm(std::string name, int signGrade, int executionGrade)
	: _name(name), _isSigned(false),
	  _signGrade(signGrade), _executionGrade(executionGrade)
{
	(this->_signGrade < 1 || this->_executionGrade < 1)
		? throw AForm::GradeTooHighException()
	: (this->_signGrade > 150 || this->_executionGrade > 150)
		? throw AForm::GradeTooLowException()
		: NULL;
}

AForm::AForm(AForm const &rhs)
	: _name(rhs._name), _isSigned(false),
	  _signGrade(rhs.getSignGrade()),
	  _executionGrade(rhs.getExecutionGrade())
{
}

AForm::~AForm(void)
{
}

AForm &AForm::operator=(AForm const &rhs)
{
	(void)rhs;
	return *this;
}

std::string const &AForm::getName(void) const
{
	return this->_name;
}

bool AForm::getIsSigned(void) const
{
	return this->_isSigned;
}

int AForm::getSignGrade(void) const
{
	return this->_signGrade;
}

int AForm::getExecutionGrade(void) const
{
	return this->_executionGrade;
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	(bureaucrat.getGrade() <= this->getSignGrade())
		? ((std::cout << bureaucrat.getName()
					  << " signed " << this->_name << std::endl) &&
		   (this->_isSigned = true))
		: throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return "Grade too high.";
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return "Grade too low.";
}

const char *AForm::FormNotSignedException::what(void) const throw()
{
	return "Form not signed.";
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
	o << "Form " << rhs.getName() << " is "
	  << (rhs.getIsSigned() ? "signed" : "unsigned")
	  << " and requires a grade of " << rhs.getSignGrade()
	  << " to be signed and a grade of " << rhs.getExecutionGrade()
	  << " to be executed." << std::endl;
	return o;
}
