/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:36:24 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/25 14:33:14 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		int		i_contacts;
		size_t	n_contacts;
		Contact	contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void add(void);
		void search(void);
};

#endif
