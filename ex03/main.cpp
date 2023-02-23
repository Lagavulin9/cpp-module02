/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:03:22 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/23 19:48:42 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	Point a = Point(0, 0);
	Point b = Point(0, 4.0f);
	Point c = Point(3.0f, 0);
	std::cout << "Triangle: ";
	std::cout << "(" << a.getFloatX() << ", " << a.getFloatY() << "), ";
	std::cout << "(" << b.getFloatX() << ", " << b.getFloatY() << "), ";
	std::cout << "(" << c.getFloatX() << ", " << c.getFloatY() << ")" << std::endl;
	Point point = Point(1.0f, 2.0f);
	std::cout << "Point: (" << point.getFloatX() << ", " << point.getFloatY() << ")" << std::endl;
	std::cout << "res: " << bsp(a, b, c, point) << std::endl;
	point = Point(0.0f, 1.0f);
	std::cout << "Point: (" << point.getFloatX() << ", " << point.getFloatY() << ")" << std::endl;
	std::cout << "res: " << bsp(a, b, c, point) << std::endl;
	point = Point(0.0f, 0.0f);
	std::cout << "Point: (" << point.getFloatX() << ", " << point.getFloatY() << ")" << std::endl;
	std::cout << "res: " << bsp(a, b, c, point) << std::endl;
	point = Point(3.0f, 5.0f);
	std::cout << "Point: (" << point.getFloatX() << ", " << point.getFloatY() << ")" << std::endl;
	std::cout << "res: " << bsp(a, b, c, point) << std::endl;
	return (0);
}
