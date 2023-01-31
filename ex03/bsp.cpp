/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:43:29 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/31 16:28:50 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	shoelaceFormula(const Point& a, const Point &b, const Point& c)
{
	float	area, x1, x2, x3, y1, y2, y3;
	
	x1 = a.getFloatX();
	x2 = b.getFloatX();
	x3 = c.getFloatX();
	y1 = a.getFloatY();
	y2 = b.getFloatY();
	y3 = c.getFloatY();
	area = (((x1*y2) + (x2*y3) + (x3*y1)) - ((x2*y1) + (x3*y2) + (x1*y3))) / 2;
	area = area > 0 ? area : -area;
	return (area);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	float area, subTri1, subTri2, subTri3;

	area = shoelaceFormula(a, b, c);
	subTri1 = shoelaceFormula(a, b, point);
	subTri2 = shoelaceFormula(a, c, point);
	subTri3 = shoelaceFormula(b, c, point);
	if (area < (subTri1 + subTri2 + subTri3) || \
		subTri1 == 0 || subTri2 == 0 || subTri3 == 0)
		return (false);
	return (true);
}
