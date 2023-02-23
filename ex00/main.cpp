/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:06:46 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/23 19:38:30 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	a.setRawBits(10);
	std::cout << a.getRawBits() << std::endl;
	
	Fixed b( a );
	std::cout << b.getRawBits() << std::endl;
	
	Fixed c;
	
	c = b;
	std::cout << c.getRawBits() << std::endl;
	
	b.setRawBits(0xffffffff);
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
