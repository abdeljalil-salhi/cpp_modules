/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:57:57 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 00:01:41 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	
	public:

		virtual ~IMateriaSource( void ) {}
		virtual void learnMateria( AMateria *m ) = 0;
		virtual AMateria *createMateria( std::string const &type ) = 0;

	protected:

	private:

};

#endif
