/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:45:10 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 11:58:36 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
	: _name("form"), _isSigned(false),
	  _signGrade(150), _executionGrade(150)
{
}

Form::Form(std::string name, int signGrade, int executionGrade)
	: _name(name), _isSigned(false),
	  _signGrade(signGrade), _executionGrade(executionGrade)
{
	(this->_signGrade < 1 || this->_executionGrade < 1)
		? throw Form::GradeTooHighException()
	: (this->_signGrade > 150 || this->_executionGrade > 150)
		? throw Form::GradeTooLowException()
		: NULL;
}

Form::Form(Form const &rhs)
	: _name(rhs._name), _isSigned(false),
	  _signGrade(rhs.getSignGrade()),
	  _executionGrade(rhs.getExecutionGrade())
{
}

Form::~Form(void)
{
}

Form &Form::operator=(Form const &rhs)
{
	this->_isSigned = rhs._isSigned;
	return *this;
}

std::string const &Form::getName(void) const
{
	return this->_name;
}

bool Form::getIsSigned(void) const
{
	return this->_isSigned;
}

int Form::getSignGrade(void) const
{
	return this->_signGrade;
}

int Form::getExecutionGrade(void) const
{
	return this->_executionGrade;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	(bureaucrat.getGrade() <= this->getSignGrade())
		? ((std::cout << bureaucrat.getName()
					  << " signed " << this->_name << std::endl) &&
		   (this->_isSigned = true))
		: throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return "Grade too high.";
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return "Grade too low.";
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form " << rhs.getName() << " is "
	  << (rhs.getIsSigned() ? "signed" : "unsigned")
	  << " and requires a grade of " << rhs.getSignGrade()
	  << " to be signed and a grade of " << rhs.getExecutionGrade()
	  << " to be executed." << std::endl;
	return o;
}
