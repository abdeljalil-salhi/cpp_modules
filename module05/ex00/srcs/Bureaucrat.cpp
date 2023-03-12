/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 02:33:42 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 03:14:52 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	: _name("bureaucrat"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name), _grade(grade)
{
	(this->_grade < 1)
		? throw Bureaucrat::GradeTooHighException()
	: (this->_grade > 150)
		? throw Bureaucrat::GradeTooLowException()
		: NULL;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
	: _name(rhs._name), _grade(rhs._grade)
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs._grade;
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade(void)
{
	(this->_grade - 1 < 1)
		? throw Bureaucrat::GradeTooHighException()
		: this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	(this->_grade + 1 > 150)
		? throw Bureaucrat::GradeTooLowException()
		: this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade too high.";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade too low.";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade "
	  << rhs.getGrade() << "." << std::endl;
	return o;
}
