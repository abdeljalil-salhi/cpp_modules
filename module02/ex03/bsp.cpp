/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 02:51:23 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/07 22:42:46 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float _area(Point const p1, Point const p2, Point const p3)
{
	float _area = ((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())) + (p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())) + (p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()))) / 2;
	return (_area < 0) ? -_area : _area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float _main0 = _area(a, b, c),
		  _area1 = _area(point, a, b),
		  _area2 = _area(point, b, c),
		  _area3 = _area(point, a, c);

	return (_area1 == 0 || _area2 == 0 || _area3 == 0)
			   ? false
		   : (_area1 + _area2 + _area3 == _main0) ? true
												  : false;
}
