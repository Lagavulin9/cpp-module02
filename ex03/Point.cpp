/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:54:23 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/31 16:26:01 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():
	_x(Fixed(0)),
	_y(Fixed(0))
{
}

Point::Point(const float x, const float y):
	_x(Fixed(x)),
	_y(Fixed(y))
{
}

Point::~Point()
{
}

Point::Point(const Point& ref):
	_x(Fixed(ref._x)),
	_y(Fixed(ref._y))
{
}

Point& Point::operator=(const Point& ref)
{
	new (this)(Point)(ref);
	return (*this);
}

float	Point::getFloatX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getFloatY(void) const
{
	return (this->_y.toFloat());
}
