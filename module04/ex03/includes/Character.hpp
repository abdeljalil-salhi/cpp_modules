/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:47:23 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 02:58:43 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	
	public:

		Character( std::string name );
		Character( Character const &rhs );
		virtual ~Character( void );
		Character &operator=( Character const &rhs );

		virtual std::string const &getName( void ) const;
		virtual void equip( AMateria *m );
		virtual void unequip( int idx );
		virtual void use( int idx, ICharacter &target );

	protected:

	private:

		std::string _name;
		AMateria *_inventory[4];

};

#endif
