/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:15:31 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:44:17 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Brain
{
	
	public:

		Brain( void );
		Brain( Brain const &rhs );
		~Brain( void );
		Brain &operator=( Brain const &rhs );

		std::string *getIdeas( void ) const;

	protected:

	private:
	
		std::string *ideas;

};

#endif