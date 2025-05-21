/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:06:39 by tmalheir          #+#    #+#             */
/*   Updated: 2025/01/22 13:28:38 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

/**
 * @class Fixed
 * @brief A fixed-point number class that stores the value as an integer and provides methods to work with raw bits.
 */
class	Fixed {

private:
	int					_fixedPointNumber;
	static const int	_fractionalBits;

public:
	/**
	 * @brief Default constructor that initializes the fixed-point number to zero.
	 * This constructor creates a `Fixed` object with a raw value of 0.
	 */
	Fixed(void);

	/**
	 * @brief Constructs a new Fixed object from an integer.
	 * @param nbr The integer value to be used for initializing the fixed-point number.
	 */
	Fixed(const int nbr);

	/**
	 * @brief Constructs a new Fixed object from a floating-point number.
	 * @param nbr The float value to be used for initializing the fixed-point number.
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
	Fixed(const Fixed &original);

	/**
	 * @brief Assignment operator for the Fixed class.
	 * @param original The Fixed object whose value will be copied.
	 * @return Fixed& A reference to the current Fixed object after the assignment.
	 */
	Fixed& operator = (const Fixed &original);

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

	/**
	 * @brief Compares if the current object is greater than the given operand.
	 * @param operand the Fixed object to compare against.
	 * @return true if the current object is greater than the operand, false otherwise.
	 */
	bool	operator>(const Fixed &operand)const;

	/**
	 * @brief Compares if the current object is less than the given operand.
	 * @param operand the Fixed object to compare against.
	 * @return true if the current object is less than the operand, false otherwise.
	 */
	bool	operator<(const Fixed &operand)const;

	/**
	 * @brief Compares if the current object is greater than or equal to the given operand.
	 * @param operand the Fixed object to compare against.
	 * @return true if the current object is greater than or equal to the operand, false otherwise.
	 */
	bool	operator>=(const Fixed &operand)const;

	/**
	 * @brief Compares if the current object is less than or equal to the given operand.
	 * @param operand the Fixed object to compare against.
	 * @return true if the current object is less than or equal to the operand, false otherwise.
	 */
	bool	operator<=(const Fixed &operand)const;

	/**
	 * @brief Compares if the current object is equal to the given operand.
	 * @param operand the Fixed object to compare against.
	 * @return true if the current object is equal to the operand, false otherwise.
	 */
	bool	operator==(const Fixed &operand)const;

	/**
	 * @brief Compares if the current object is not equal to the given operand.
	 * @param operand the Fixed object to compare against.
	 * @return true if the current object is not equal to the operand, false otherwise.
	 */
	bool	operator!=(const Fixed &operand)const;

	/**
	 * @brief Adds the current object to the given operand.
	 * @param operand the Fixed object to add to the current object.
	 * @return a new Fixed object with the result of the addition.
	 */
	Fixed	operator+(const Fixed &operand);

	/**
	 * @brief Subtracts the given operand from the current object.
	 * @param operand the Fixed object to subtract from the current object.
	 * @return a new Fixed object with the result of the subtraction.
	 */
	Fixed	operator-(const Fixed &operand);

	/**
	 * @brief Multiplies the current object by the given operand.
	 * @param operand the Fixed object to multiply by the current object.
	 * @return a new Fixed object with the result of the multiplication.
	 */
	Fixed	operator*(const Fixed &operand);

	/**
	 * @brief Divides the current object by the given operand.
	 * @param operand the Fixed object to divide the current object by.
	 * @return a new Fixed object with the result of the division.
	 */
	Fixed	operator/(const Fixed &operand);

	/**
	 * @brief Increments the value of the current Fixed object.
	 *
	 * This operator performs a pre-increment operation, meaning the value of the object
	 * is incremented before it is used or returned. The object itself is modified and
	 * the reference to the updated object is returned.
	 *
	 * @return Fixed& A reference to the current Fixed object after the increment.
	 */
	Fixed	&operator++(void);

	/**
	 * @brief Increments the value of the current Fixed object and returns the original value.
	 *
	 * This operator performs a post-increment operation, meaning the current value of the object
	 * is returned before the increment occurs. The value of the object is incremented after
	 * it has been returned.
	 *
	 * @param int A dummy integer parameter to distinguish this from the pre-increment operator.
	 *
	 * @return Fixed A copy of the current Fixed object with the original value before the increment.
	 */
	Fixed	operator++(int);

	/**
	 * @brief Decrements the value of the current Fixed object.
	 *
	 * This operator performs a pre-decrement operation, meaning the value of the object
	 * is decremented before it is used or returned. The object itself is modified and
	 * the reference to the updated object is returned.
	 *
	 * @return Fixed& A reference to the current Fixed object after the decrement.
	 */
	Fixed	&operator--(void);

	/**
	 * @brief Decrements the value of the current Fixed object and returns the original value.
	 *
	 * This operator performs a post-decrement operation, meaning the current value of the object
	 * is returned before the decrement occurs. The value of the object is decremented after
	 * it has been returned.
	 *
	 * @param int A dummy integer parameter to distinguish this from the pre-decrement operator.
	 *
	 * @return Fixed A copy of the current Fixed object with the original value before the decrement.
	 */
	Fixed	operator--(int);

	/**
	 * @brief Returns the minimum of two Fixed objects.
	 *
	 * This function compares two `Fixed` objects and returns the one with the smallest value.
	 * If `a` is less than `b`, `a` is returned; otherwise, `b` is returned.
	 * The function modifies the original object if necessary.
	 *
	 * @param a The first Fixed object to compare.
	 * @param b The second Fixed object to compare.
	 *
	 * @return Fixed& A reference to the Fixed object with the smallest value.
	 */
	static Fixed&	min(Fixed &a, Fixed &b);

	/**
	 * @brief Returns the minimum of two Fixed objects, with a constant reference.
	 *
	 * This function compares two `Fixed` objects and returns the one with the smallest value.
	 * If `a` is less than `b`, `a` is returned; otherwise, `b` is returned.
	 * The function guarantees that the returned reference is constant, meaning the object cannot be modified.
	 *
	 * @param a The first Fixed object to compare.
	 * @param b The second Fixed object to compare.
	 *
	 * @return const Fixed& A constant reference to the Fixed object with the smallest value.
	 */
	static const Fixed&	min(const Fixed &a, const Fixed &b);

	/**
	 * @brief Returns the maximum of two Fixed objects.
	 *
	 * This function compares two `Fixed` objects and returns the one with the largest value.
	 * If `a` is greater than `b`, `a` is returned; otherwise, `b` is returned.
	 * The function modifies the original object if necessary.
	 *
	 * @param a The first Fixed object to compare.
	 * @param b The second Fixed object to compare.
	 *
	 * @return Fixed& A reference to the Fixed object with the largest value.
	 */
	static Fixed&	max(Fixed &a, Fixed &b);

	/**
	 * @brief Returns the maximum of two Fixed objects, with a constant reference.
	 *
	 * This function compares two `Fixed` objects and returns the one with the largest value.
	 * If `a` is greater than `b`, `a` is returned; otherwise, `b` is returned.
	 * The function guarantees that the returned reference is constant, meaning the object cannot be modified.
	 *
	 * @param a The first Fixed object to compare.
	 * @param b The second Fixed object to compare.
	 *
	 * @return const Fixed& A constant reference to the Fixed object with the largest value.
	 */
	static const Fixed&	max(const Fixed &a, const Fixed &b);
};

/**
 * @brief Inserts the Fixed object into the output stream.
 *
 * This function allows the `Fixed` object to be printed or written to an output stream (e.g., `std::cout`).
 * It formats the `Fixed` object appropriately for display.
 *
 * @param out the output stream where the Fixed object will be inserted.
 * @param nbr the Fixed object to be inserted into the stream.
 * @return the output stream, allowing for chained operations.
 */
std::ostream &operator<<(std::ostream &out, const Fixed &nbr);

#endif