/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:44:19 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/30 16:31:51 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>

Fixed::Fixed():
	_fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	unsigned int	uint_n = n;
	unsigned int	sign = 0x80000000 & n;

	this->setRawBits(((uint_n << (SIGNBIT + this->_fractionalBits)) >> SIGNBIT) | sign);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	this->setRawBits((int)roundf(f * (1 << this->_fractionalBits)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy):
	_fixedPoint(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = ref.getRawBits();
	return (*this);
}

Fixed&	Fixed::operator++()
{
	this->_fixedPoint += 1;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->_fixedPoint -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++*this;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--*this;
	return (tmp);
}

bool	Fixed::operator<(const Fixed& ref)
{
	return (this->toFloat() < ref.toFloat());
}

bool	Fixed::operator>(const Fixed& ref)
{
	return (this->toFloat() > ref.toFloat());
}

bool	Fixed::operator<=(const Fixed& ref)
{
	return (this->toFloat() <= ref.toFloat());
}

bool	Fixed::operator>=(const Fixed& ref)
{
	return (this->toFloat() >= ref.toFloat());
}

bool	Fixed::operator==(const Fixed& ref)
{
	return (this->toFloat() == ref.toFloat());
}

bool	Fixed::operator!=(const Fixed& ref)
{
	return (this->toFloat() != ref.toFloat());
}

float	Fixed::operator+(const Fixed& ref)
{
	return (this->toFloat() + ref.toFloat());
}

float	Fixed::operator-(const Fixed& ref)
{
	return (this->toFloat() - ref.toFloat());
}

float	Fixed::operator*(const Fixed& ref)
{
	return (this->toFloat() * ref.toFloat());
}

float	Fixed::operator/(const Fixed& ref)
{
	return (this->toFloat() / ref.toFloat());
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

int		Fixed::toInt(void) const
{
	return (this->_fixedPoint >> this->_fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fixedPoint) / (1 << this->_fractionalBits));
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a > b ? b : a);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& ref)
{
	return (stream << ref.toFloat());
}
