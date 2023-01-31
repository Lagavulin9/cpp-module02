/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:03:22 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/31 16:28:53 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	Point a = Point(0, 0);
	Point b = Point(0, 4.0f);
	Point c = Point(3.0f, 0);
	Point point = Point(1.0f, 2.0f);
	std::cout << bsp(a, b, c, point) << std::endl;
	return (0);
}
