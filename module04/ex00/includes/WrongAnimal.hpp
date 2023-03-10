/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:05:39 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:06:39 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class WrongAnimal
{
	
	public:

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const &rhs );
		~WrongAnimal( void );
		WrongAnimal &operator=( WrongAnimal const &rhs );

		void makeSound( void ) const;
		
		std::string getType( void ) const;

	protected:

		std::string type;

	private:
	

};

#endif
