/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:03:26 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/30 16:32:59 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << "a+b: " << a+b << std::endl;
	std::cout << "a-b: " << a-b << std::endl;
	std::cout << "a*b: " << a*b << std::endl;
	std::cout << "a/b: " << a/b << std::endl;
	std::cout << "a>b: " << (a>b) << std::endl;
	std::cout << "a<b: " << (a<b) << std::endl;
	std::cout << "a>=b: " << (a>=b) << std::endl;
	std::cout << "a<=b: " << (a<=b) << std::endl;
	std::cout << "a==b: " << (a==b) << std::endl;
	std::cout << "a!=b: " << (a!=b) << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
