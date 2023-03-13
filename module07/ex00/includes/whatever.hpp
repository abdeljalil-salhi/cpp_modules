/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:40:51 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 09:53:14 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T _tmp = x;
	x = y;
	y = _tmp;
}

template <typename T>
T const &min(T const &x, T const &y)
{
	return (x < y) ? x : y;
}

template <typename T>
T const &max(T const &x, T const &y)
{
	return (x > y) ? x : y;
}

#endif
