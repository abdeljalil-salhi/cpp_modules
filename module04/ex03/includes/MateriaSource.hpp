/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:58:49 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/11 04:13:24 by absalhi          ###   ########.fr       */
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
		~MateriaSource( void );
		MateriaSource &operator=( MateriaSource const &rhs );

		void learnMateria( AMateria *m );
		AMateria *createMateria( std::string const &type );

	protected:

	private:

		AMateria *_inventory[4];

};

#endif
