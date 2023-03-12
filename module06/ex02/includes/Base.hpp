/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:35:23 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/12 20:43:06 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{

	public:

		virtual ~Base( void );

	protected:

	private:

};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate( void );

void identify( Base *p );
void identify( Base &p );

#endif