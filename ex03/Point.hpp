/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:35:28 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/31 16:26:14 by jinholee         ###   ########.fr       */
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

	float	getFloatX(void) const;
	float	getFloatY(void) const;
};

#endif
