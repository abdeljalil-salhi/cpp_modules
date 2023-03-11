/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:38:28 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 04:09:14 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	
	public:

		Ice( void );
		Ice( Ice const &rhs );
		~Ice( void );
		Ice &operator=( Ice const &rhs );

		std::string const &getType( void ) const;

		Ice *clone( void ) const;
		void use( ICharacter &target );

	protected:

	private:

		std::string _type;

};

#endif
