/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:44:17 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/30 16:32:35 by jinholee         ###   ########.fr       */
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

	Fixed&					operator=(const Fixed&);
	Fixed&					operator++(); //prefix
	Fixed&					operator--(); //prefix
	Fixed					operator++(int); //postfix
	Fixed					operator--(int); //postfix
	bool					operator<(const Fixed&);
	bool					operator>(const Fixed&);
	bool					operator<=(const Fixed&);
	bool					operator>=(const Fixed&);
	bool					operator==(const Fixed&);
	bool					operator!=(const Fixed&);
	float					operator+(const Fixed&);
	float					operator-(const Fixed&);
	float					operator*(const Fixed&);
	float					operator/(const Fixed&);
	friend std::ostream&	operator<<(std::ostream&, const Fixed&);

	static Fixed&	max(Fixed&, Fixed&);
	static Fixed&	min(Fixed&, Fixed&);
	void			setRawBits(int const);
	int				getRawBits(void) const;
	int				toInt(void) const;
	float			toFloat(void) const;
};

#endif
