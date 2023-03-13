/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:05:13 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 17:32:33 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*f)(T &))
{
	if (!array || !f)
		return;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void iter(const T *array, size_t length, void (*f)(const T &))
{
	if (!array || !f)
		return;
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

#endif
