/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:08:09 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 20:12:12 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{

	public:
	
		Data( void );
		Data( Data const &rhs );
		~Data( void );
		Data &operator=( Data const &rhs );

	protected:

	private:

};

#endif
