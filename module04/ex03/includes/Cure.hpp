/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:37:49 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 00:02:28 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	
	public:

		Cure( void );
		Cure( Cure const &rhs );
		virtual ~Cure( void );
		Cure &operator=( Cure const &rhs );

		virtual AMateria *clone( void ) const;
		virtual void use( ICharacter &target );

	protected:

	private:

};

#endif
