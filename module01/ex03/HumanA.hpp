/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:50:26 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 01:36:26 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{

	public:

		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
	
		void attack( void );

	private:

		std::string _name;
		Weapon &_weapon;

		HumanA( void );
		
};

#endif