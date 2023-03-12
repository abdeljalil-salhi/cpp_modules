/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:30:55 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 04:12:58 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	
	public:

		Form( void );
		Form( std::string name, int signGrade, int executionGrade );
		Form( Form const &rhs );
		~Form( void );
		Form &operator=( Form const &rhs );

		std::string const &getName( void ) const;
		bool getIsSigned( void ) const;
		int getSignGrade( void ) const;
		int getExecutionGrade( void ) const;

		void beSigned( Bureaucrat const &bureaucrat );
		
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

	protected:

	private:

		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _executionGrade;
	
};

std::ostream &operator<<( std::ostream &o, Form const &rhs );

#endif
