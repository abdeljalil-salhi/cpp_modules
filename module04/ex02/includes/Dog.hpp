/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:57:47 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:54:14 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	
	public:

		Dog( void );
		Dog( Dog const &rhs );
		~Dog( void );
		Dog &operator=( Dog const &rhs );

		void makeSound( void ) const;

		std::string getType( void ) const;
		Brain *getBrain( void ) const;

	protected:

	private:

		std::string type;
		Brain *brain;

};

#endif
