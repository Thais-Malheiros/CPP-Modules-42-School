/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:25:49 by tmalheir          #+#    #+#             */
/*   Updated: 2025/01/23 14:17:57 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedPointNumber(0) {
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const int nbr) {
	std::cout << "Int constructor called." << std::endl;
	_fixedPointNumber = nbr * (1 << _fractionalBits);
}

Fixed::Fixed(const float nbr) {
	std::cout << "Float constructor called." << std::endl;
	_fixedPointNumber = roundf(nbr * (1 << _fractionalBits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed& original) {
	std::cout << "Copy constructor called." << std::endl;
	*this = original;
}

Fixed &Fixed::operator = (const Fixed& original) {
	std::cout << "Copy assignment operator called." << std::endl;
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
	return (_fixedPointNumber >> _fractionalBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &nbr) {
	out << nbr.toFloat();
	return (out);
}
