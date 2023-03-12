/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 07:58:35 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 08:58:41 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{

	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const &rhs );
		~RobotomyRequestForm( void );
		RobotomyRequestForm &operator=( RobotomyRequestForm const &rhs );

		std::string getTarget( void ) const;

		void execute( Bureaucrat const &executor ) const;
	
	private:

		std::string _target;
		
		RobotomyRequestForm( void );
	
};

std::ostream &operator<<( std::ostream &o, RobotomyRequestForm const &rhs );

#endif
