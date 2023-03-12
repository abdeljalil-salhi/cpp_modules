/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:51:17 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 08:49:06 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class AForm;

class Bureaucrat
{

	public:

	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const &rhs );
	~Bureaucrat( void );
	Bureaucrat &operator=( Bureaucrat const &rhs );

	std::string getName( void ) const;
	int getGrade( void ) const;
	
	void incrementGrade( void );
	void decrementGrade( void );

	void signForm( AForm &form );
	void executeForm( AForm const &form );
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what( void ) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what( void ) const throw();
	};
	
	protected:

	private:

		std::string const _name;
		int _grade;
	
};

std::ostream &operator<<( std::ostream &o, Bureaucrat const &rhs );

#endif
