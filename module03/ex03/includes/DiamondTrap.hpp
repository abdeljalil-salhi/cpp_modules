/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:58:01 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/09 20:22:12 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const &rhs );
		~DiamondTrap( void );
		DiamondTrap &operator=( DiamondTrap const &rhs );

		void attack( std::string const &target );
		void whoAmI( void );

		std::string getName( void ) const;
		unsigned int getHitPoints( void ) const;
		unsigned int getEnergyPoints( void ) const;
		unsigned int getAttackDamage( void ) const;

	private:

		std::string _name;

};

std::ostream &operator<<( std::ostream &o, DiamondTrap const &rhs );

#endif
