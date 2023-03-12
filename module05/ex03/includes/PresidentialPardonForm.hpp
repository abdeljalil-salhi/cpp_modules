/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 08:25:50 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 08:58:38 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{

	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const &rhs );
		~PresidentialPardonForm( void );
		PresidentialPardonForm &operator=( PresidentialPardonForm const &rhs );

		std::string getTarget( void ) const;

		void execute( Bureaucrat const &executor ) const;
	
	private:

		std::string _target;
		
		PresidentialPardonForm( void );
	
};

std::ostream &operator<<( std::ostream &o, PresidentialPardonForm const &rhs );

#endif
