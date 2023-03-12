/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:08:30 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 20:15:21 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include "Data.hpp"

class Serializer
{

	public:
	
		Serializer( void );
		Serializer( Serializer const &rhs );
		~Serializer( void );
		Serializer &operator=( Serializer const &rhs );

		static uintptr_t serialize( Data *ptr );
		static Data *deserialize( uintptr_t raw );

	protected:

	private:

};

#endif
