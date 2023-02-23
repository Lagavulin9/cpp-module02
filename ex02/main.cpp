/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:03:26 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/23 19:25:48 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a = 1.5f;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	b = 0;
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << a+b  << ": a+b" << std::endl;
	std::cout << a-b << ": a-b" << std::endl;
	std::cout << a*b << ": a*b" << std::endl;
	std::cout << a/b << ": a/b" << std::endl;
	std::cout << "a>b: " << (a>b) << std::endl;
	std::cout << "a<b: " << (a<b) << std::endl;
	std::cout << "a>=b: " << (a>=b) << std::endl;
	std::cout << "a<=b: " << (a<=b) << std::endl;
	std::cout << "a==b: " << (a==b) << std::endl;
	std::cout << "a!=b: " << (a!=b) << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "min(a,b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a,b): " << Fixed::max(a, b)  << std::endl;
	return 0;
}
