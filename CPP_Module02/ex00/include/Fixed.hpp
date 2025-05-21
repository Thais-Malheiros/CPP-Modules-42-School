/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:06:39 by tmalheir          #+#    #+#             */
/*   Updated: 2025/01/22 11:10:27 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

/**
 * @class Fixed
 * @brief A fixed-point number class that stores the value as an integer and
 * provides methods to work with raw bits.
 */
class	Fixed {

private:
	int					_fixedPointNumber;
	static const int	_fractionalBits;

public:
	/**
	 * @brief Default constructor that initializes the fixed-point number to
	 * zero.
	 * This constructor creates a `Fixed` object with a raw value of 0.
	 */
	Fixed(void);

	/**
	 * @brief Destructor for the Fixed class.
	 */
	~Fixed(void);

	/**
	 * @brief Copy constructor for the Fixed class.
	 * @param original The Fixed object to copy.
	 */
	Fixed(const Fixed& original);

	/**
	 * @brief Assignment operator for the Fixed class.
	 * @param original The Fixed object whose value will be copied.
	 * @return Fixed& A reference to the current Fixed object after the
	 * assignment.
	 */
	Fixed& operator = (const Fixed& original);

	/**
	 * @brief Returns the raw fixed-point value stored in the object.
	 * @return int The raw fixed-point value stored in the object.
	 */
	int		getRawBits(void)const;

	/**
	 * @brief Sets the raw fixed-point value for the object.
	 * @param raw The raw fixed-point value to be set.
	 */
	void	setRawBits(int const raw);
};

#endif