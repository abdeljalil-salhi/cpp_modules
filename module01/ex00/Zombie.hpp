/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:55:59 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/03 22:04:23 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{

	public:

		Zombie( std::string name );
		~Zombie( void );

		void announce( void );

	private:

		std::string _name;
		
		Zombie( void );

};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
