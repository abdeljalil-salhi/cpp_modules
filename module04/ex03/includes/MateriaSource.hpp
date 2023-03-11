/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:58:49 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 00:02:52 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	
	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const &rhs );
		virtual ~MateriaSource( void );
		MateriaSource &operator=( MateriaSource const &rhs );

		virtual void learnMateria( AMateria *m );
		virtual AMateria *createMateria( std::string const &type );

	protected:

	private:

		AMateria *_inventory[4];

};

#endif
