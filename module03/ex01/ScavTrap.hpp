/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:38:58 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/09 20:25:41 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

	public:

		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &rhs );
		~ScavTrap( void );
		ScavTrap &operator=( ScavTrap const &rhs );

		void attack( const std::string &target );
		void guardGate( void );

	private:

		bool _guardMode;

		ScavTrap( void );
	
};

#endif
