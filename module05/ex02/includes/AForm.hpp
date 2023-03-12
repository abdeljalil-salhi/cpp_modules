/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 04:50:59 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 09:25:19 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	
	public:

		AForm( void );
		AForm( std::string name, int signGrade, int executionGrade );
		AForm( AForm const &rhs );
		virtual ~AForm( void );
		AForm &operator=( AForm const &rhs );

		std::string const &getName( void ) const;
		bool getIsSigned( void ) const;
		int getSignGrade( void ) const;
		int getExecutionGrade( void ) const;

		void beSigned( Bureaucrat const &bureaucrat );

		virtual void execute( Bureaucrat const &executor ) const = 0;
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what( void ) const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what( void ) const throw();
		};

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char *what( void ) const throw();
		};

	protected:

		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _executionGrade;

	private:
	
};

std::ostream &operator<<( std::ostream &o, AForm const &rhs );

#endif
