/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:44:17 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/31 15:59:56 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP__
# define __FIXED_HPP__
# define SIGNBIT 1
# define FRACTIONALBITS 8

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_fractionalBits = FRACTIONALBITS;
public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed&);
	~Fixed();

	Fixed& 	operator=(const Fixed& ref);

	void	setRawBits(int const);
	int		getRawBits(void) const;
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream&, const Fixed&);

#endif
