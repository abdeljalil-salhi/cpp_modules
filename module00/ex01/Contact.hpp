/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:35:44 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/28 15:25:35 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Contact {
	
	private:
	
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	
	public:
	
		Contact( void );
		Contact( std::string firstName, std::string lastName,
				 std::string nickname, std::string phoneNumber, std::string darkestSecret );
		~Contact( void );

		std::string	getFirstName( void );
		std::string	getLastName( void );
		std::string	getNickname( void );
		std::string	getPhoneNumber( void );
		std::string	getDarkestSecret( void );

};

#endif
