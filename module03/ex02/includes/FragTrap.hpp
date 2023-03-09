/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:30:07 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/09 20:16:04 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

	public:

		FragTrap( std::string name );
		FragTrap( FragTrap const &rhs );
		~FragTrap( void );
		FragTrap &operator=( FragTrap const &rhs );

		void highFivesGuys( void );
	
	private:

		FragTrap( void );
	
};

#endif