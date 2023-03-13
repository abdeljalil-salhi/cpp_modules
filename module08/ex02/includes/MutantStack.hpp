/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 22:33:15 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 23:34:38 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{

	public:

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack( void ) {}
		MutantStack( MutantStack const &rhs ) { *this = rhs; }
		~MutantStack( void ) {}
		MutantStack &operator=( MutantStack const &rhs )
		{
			if (this != &rhs)
				MutantStack::stack::operator=(rhs);
			return *this;
		}

		iterator begin( void ) { return this->c.begin(); }
		iterator end( void ) { return this->c.end(); }

		const_iterator cbegin( void ) const { return this->c.cbegin(); }
		const_iterator cend( void ) const { return this->c.cend(); }

		reverse_iterator rbegin( void ) { return this->c.rbegin(); }
		reverse_iterator rend( void ) { return this->c.rend(); }

		const_reverse_iterator crbegin( void ) const { return this->c.crbegin(); }
		const_reverse_iterator crend( void ) const { return this->c.crend(); }

	protected:

	private:
	
};

#endif
