/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:49:05 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 20:51:02 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Harl
{

	public:

		Harl( void );
		~Harl( void );

		void complain( std::string level );

	private:
		
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

#endif