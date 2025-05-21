/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:06:39 by tmalheir          #+#    #+#             */
/*   Updated: 2025/01/22 11:11:52 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

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
	 * @brief Constructs a new Fixed object from an integer.
	 * @param nbr The integer value to be used for initializing the fixed-point
	 * number.
	 */
	Fixed(const int nbr);

	/**
	 * @brief Constructs a new Fixed object from a floating-point number.
	 * @param nbr The float value to be used for initializing the fixed-point
	 * number.
	 */
	Fixed(const float nbr);

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
	 * @param original The Fixed object to copy.
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

	/**
	 * @brief Converts the fixed-point number to a floating-point number.
	 * @return float The fixed-point number converted to a float.
	 */
	float	toFloat(void)const;

	/**
	 * @brief Converts the fixed-point number to an integer.
	 * @return int The fixed-point number converted to an integer.
	 */
	int		toInt(void)const;
};

/**
 * @brief Inserts the Fixed object into the output stream.
 *
 * This function allows the `Fixed` object to be printed or written to an
 * output stream (e.g., `std::cout`).
 * It formats the `Fixed` object appropriately for display.
 *
 * @param out the output stream where the Fixed object will be inserted.
 * @param nbr the Fixed object to be inserted into the stream.
 * @return the output stream, allowing for chained operations.
 */
std::ostream& operator<<(std::ostream &out, const Fixed &nbr);

#endif