/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:25:02 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 04:42:57 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class ICharacter;

class AMateria
{
	
	public:

		AMateria( void );
		AMateria( std::string const &type );
		AMateria( AMateria const &rhs );
		virtual ~AMateria( void );
		AMateria &operator=( AMateria const &rhs );

		virtual std::string const &getType( void ) const;

		virtual AMateria *clone( void ) const = 0;
		virtual void use( ICharacter &target );

	protected:

		std::string const _type;

	private:
	
};

#endif
