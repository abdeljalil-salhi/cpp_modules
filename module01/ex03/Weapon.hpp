/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:37:02 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/03 22:59:29 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Weapon
{

	public:

		Weapon( std::string type );
		~Weapon( void );
		
		void setType( std::string type );

		std::string const &getType( void ) const;

	private:

		std::string _type;
		
		Weapon( void );

};

#endif