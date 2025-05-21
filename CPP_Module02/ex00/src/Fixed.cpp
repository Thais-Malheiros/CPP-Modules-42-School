/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:25:49 by tmalheir          #+#    #+#             */
/*   Updated: 2025/01/23 14:08:43 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void): _fixedPointNumber(0) {
	std::cout << "Default constructor called." << std::endl;
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
	std::cout << "getRawBits member function called." << std::endl;
	return (_fixedPointNumber);
}

void Fixed::setRawBits(int raw) {
	std::cout << "setRawBits member function called." << std::endl;
	_fixedPointNumber = raw;
}
