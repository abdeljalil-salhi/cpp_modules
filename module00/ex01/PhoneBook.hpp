/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:36:24 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/28 15:24:26 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	
	private:
	
		int		_iContacts;
		size_t	_nContacts;
		Contact	_contacts[8];
	
	public:
	
		PhoneBook( void );
		~PhoneBook( void );

		void add( void );
		void search( void );

};

#endif
