/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:16:19 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 22:22:08 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{

	public:

		typedef std::vector<int> vi;
		typedef std::vector<int>::iterator it;

		Span( void );
		Span( unsigned int N );
		Span( Span const &rhs );
		~Span( void );
		Span &operator=( Span const &rhs );

		void addNumber( int number );
		void addRange( it begin, it end );
		
		int shortestSpan( void ) const;
		int longestSpan( void ) const;

		unsigned int size( void ) const;
		std::vector<int> getVector( void ) const;
		
	protected:

	private:
	
		unsigned int _size;
		std::vector<int> _vector;

};

std::ostream &operator<<( std::ostream &o, const Span &rhs );

#endif