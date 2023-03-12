/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 06:59:16 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 08:49:03 by absalhi          ###   ########.fr       */
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
	: _name(rhs.getName()), _grade(rhs.getGrade())
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

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName()
				  << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName()
				  << " because " << e.what() << std::endl;
	}
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
