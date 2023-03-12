/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 07:17:13 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 07:55:55 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

	public:

		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const &rhs );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm &operator=( ShrubberyCreationForm const &rhs );

		std::string getTarget( void ) const;

		void execute( Bureaucrat const &executor ) const;
	
	private:

		std::string _target;
		
		ShrubberyCreationForm( void );

};

std::ostream &operator<<( std::ostream &o, ShrubberyCreationForm const &rhs );

#endif
