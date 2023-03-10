/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:13:22 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:05:52 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Animal
{
	
	public:

		Animal( void );
		Animal( Animal const &rhs );
		virtual ~Animal( void );
		Animal &operator=( Animal const &rhs );

		virtual void makeSound( void ) const;
		
		virtual std::string getType( void ) const;

	protected:

		std::string type;

	private:
	

};

#endif
