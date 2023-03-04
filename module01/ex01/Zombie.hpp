/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:55:59 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/03 22:41:12 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Zombie
{

	public:

		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void announce( void );
		
		void setName( std::string name );

		std::string getName( void ) const;

	private:

		std::string _name;

};

Zombie *zombieHorde( int N, std::string name );

#endif
