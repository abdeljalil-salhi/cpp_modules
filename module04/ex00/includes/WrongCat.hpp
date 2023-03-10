/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:06:52 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:07:31 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	
	public:

		WrongCat( void );
		WrongCat( WrongCat const &rhs );
		~WrongCat( void );
		WrongCat &operator=( WrongCat const &rhs );

		void makeSound( void ) const;

		std::string getType( void ) const;

	protected:

	private:

		std::string type;

};

#endif
