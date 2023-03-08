/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:58:41 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/08 21:45:52 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class ClapTrap
{

	public:

		ClapTrap( std::string name );
		ClapTrap( ClapTrap const &rhs );
		~ClapTrap( void );
		ClapTrap &operator=( ClapTrap const &rhs );

		void attack( const std::string &target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

		void setName( const std::string &name );

	protected:

		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;

	private:
		
		ClapTrap( void );

};

#endif