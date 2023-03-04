/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:04:57 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 01:39:25 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{

	public:

		HumanB( std::string name );
		~HumanB( void );
	
		void attack( void );

		void setWeapon( Weapon &weapon );

	private:

		std::string _name;
		Weapon *_weapon;

		HumanB( void );
		
};

#endif