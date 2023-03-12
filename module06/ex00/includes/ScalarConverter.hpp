/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:36:26 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 18:19:38 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class ScalarConverter
{
	
	public:

		ScalarConverter( void );
		ScalarConverter( ScalarConverter const &rhs );
		~ScalarConverter( void );
		ScalarConverter &operator=( ScalarConverter const &rhs) ;

		static std::string convert( std::string const &literal );

	protected:

	private:
	
};

#endif
