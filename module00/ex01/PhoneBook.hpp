/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:36:24 by absalhi           #+#    #+#             */
/*   Updated: 2023/02/07 02:23:32 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {
	private:
		int		n_contacts;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(void);
};

class PhoneBookInit {
	private:
		char	c;
		int		n;
	public:
		PhoneBookInit(char c, int n);
		~PhoneBookInit(void);
};

#endif
