/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:25:49 by tmalheir          #+#    #+#             */
/*   Updated: 2025/01/23 14:21:57 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedPointNumber(0) {
}

Fixed::Fixed(const int nbr) {
	_fixedPointNumber = nbr * (1 << _fractionalBits);
}

Fixed::Fixed(const float nbr) {
	_fixedPointNumber = roundf(nbr * (1 << _fractionalBits));
}

Fixed::~Fixed(void) {
}

Fixed::Fixed(const Fixed &original) {
	*this = original;
}

Fixed &Fixed::operator = (const Fixed &original) {
	_fixedPointNumber = original.getRawBits();
	return(*this);
}

int Fixed::getRawBits(void) const {
	return (_fixedPointNumber);
}

void Fixed::setRawBits(int raw) {
	_fixedPointNumber = raw;
}

float Fixed::toFloat(void) const{
	return ((float)_fixedPointNumber / (1 << _fractionalBits));
}

int Fixed::toInt(void) const{
	return (_fixedPointNumber / (1 << _fractionalBits));
}

bool	Fixed::operator>(const Fixed &operand) const {
	return (_fixedPointNumber > operand.getRawBits());
}

bool	Fixed::operator<(const Fixed &operand) const {
	return (_fixedPointNumber < operand.getRawBits());
}

bool	Fixed::operator>=(const Fixed &operand) const {
	return (_fixedPointNumber >= operand.getRawBits());
}

bool	Fixed::operator<=(const Fixed &operand) const {
	return (_fixedPointNumber <= operand.getRawBits());
}

bool	Fixed::operator==(const Fixed &operand) const {
	return (_fixedPointNumber == operand.getRawBits());
}

bool	Fixed::operator!=(const Fixed &operand) const {
	return (_fixedPointNumber != operand.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &operand) {
	return (Fixed(this->toFloat() + operand.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &operand) {
	return (Fixed(this->toFloat() - operand.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &operand) {
	return (Fixed(this->toFloat() * operand.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &operand) {
	return (Fixed(this->toFloat() / operand.toFloat()));
}

Fixed	&Fixed::operator++(void) {
	_fixedPointNumber++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed	&Fixed::operator--(void) {
	_fixedPointNumber--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return(tmp);
}

std::ostream &operator << (std::ostream &out, const Fixed &nbr) {
	out << nbr.toFloat();
	return (out);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}
