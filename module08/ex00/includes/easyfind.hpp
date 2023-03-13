/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:31:44 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 21:12:55 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
typename T::iterator easyfind(T &container, int toFind)
{
	typename T::iterator _result = find(container.begin(),
										container.end(),
										toFind);
	if (_result == container.end())
		throw std::runtime_error("Value not found");
	return _result;
}

#endif
