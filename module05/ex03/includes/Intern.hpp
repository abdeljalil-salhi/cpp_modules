/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 09:05:17 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 09:14:50 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{

	public:

		Intern( void );
		Intern( Intern const &rhs );
		~Intern( void );
		Intern &operator=( Intern const &rhs );

		AForm *makeForm(std::string name, std::string target);

	protected:

	private:
	
};

#endif
