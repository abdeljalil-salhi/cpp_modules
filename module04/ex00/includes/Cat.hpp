/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 01:23:03 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/10 02:06:06 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	
	public:

		Cat( void );
		Cat( Cat const &rhs );
		~Cat( void );
		Cat &operator=( Cat const &rhs );

		void makeSound( void ) const;

		std::string getType( void ) const;

	protected:

	private:

		std::string type;

};

#endif
