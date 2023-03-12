/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 07:17:07 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 09:00:36 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("Shrubbery Creation", 145, 137), _target(target)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm " << this->_target << " constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs)
	: AForm(rhs), _target(rhs.getTarget())
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm " << this->_target << " copy constructed." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm " << this->_target << " destroyed." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	AForm::operator=(rhs);
	this->_target = rhs.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	(executor.getGrade() > this->getExecutionGrade())
		? throw AForm::GradeTooLowException()
	: (this->getIsSigned() == false)
		? throw AForm::FormNotSignedException()
		: NULL;

	std::ofstream _file(this->_target + "_shrubbery");
	_file << "                     ; ; ;" << std::endl;
	_file << "                   ;        ;  ;     ;;    ;" << std::endl;
	_file << "                ;                 ;         ;  ;" << std::endl;
	_file << "                                ;" << std::endl;
	_file << "                               ;                ;;" << std::endl;
	_file << "               ;          ;            ;              ;" << std::endl;
	_file << "               ;            ';,        ;               ;" << std::endl;
	_file << "               ;              'b      *" << std::endl;
	_file << "                ;              '$    ;;                ;;" << std::endl;
	_file << "               ;    ;           $:   ;:               ;" << std::endl;
	_file << "             ;;      ;  ;;      *;  @):        ;   ; ;" << std::endl;
	_file << "                          ;     :@,@):   ,;**:'   ;" << std::endl;
	_file << "              ;      ;,         :@@*: ;;**'      ;   ;" << std::endl;
	_file << "                       ';o;    ;:(@';@*\"'  ;" << std::endl;
	_file << "               ;  ;       'bq,;;:,@@*'   ,*      ;  ;" << std::endl;
	_file << "                          ,p$q8,:@)'  ;p*'      ;" << std::endl;
	_file << "                   ;     '  ; '@@Pp@@*'    ;  ;" << std::endl;
	_file << "                    ;  ; ;;    Y7'.'     ;  ;" << std::endl;
	_file << "                              :@):." << std::endl;
	_file << "                             .:@:'." << std::endl;
	_file << "                           .::(@:." << std::endl;
	_file.close();

	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs)
{
	o << "Shrubbery Creation Form '" << rhs.getName() << "' is "
	  << (rhs.getIsSigned() ? "signed" : "unsigned")
	  << ", has a target of " << rhs.getTarget()
	  << ", requires a grade of " << rhs.getSignGrade()
	  << " to be signed and a grade of " << rhs.getExecutionGrade()
	  << " to be executed." << std::endl;
	return o;
}
