/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:35:28 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/30 21:44:39 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed _y;
public:
	Point();
	Point(const float, const float);
	Point(const Point&);
	~Point();

	Point&	operator=(const Point&);

	float	getFloatX(void);
	float	getFloatY(void);
};

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
	Point	point;

	point = Point(ref);
	return (point);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	
}

float	slope(Point& to, Point& from)
{

}

#endif
