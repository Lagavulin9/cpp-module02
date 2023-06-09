/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:44:17 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/27 17:41:49 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP__
# define __FIXED_HPP__
# define SIGNBIT 1
# define FRACTIONALBITS 8

# include <iostream>

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_fractionalBits = FRACTIONALBITS;
public:
	Fixed();
	Fixed(const Fixed& copy);
	~Fixed();
	
	Fixed& operator=(const Fixed& ref);

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
};

#endif
