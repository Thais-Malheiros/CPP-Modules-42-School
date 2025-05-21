/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:52:32 by tmalheir          #+#    #+#             */
/*   Updated: 2025/01/23 13:58:57 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int	main(void) {

	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );

	/**
	 * @test Increment operator
	 */
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << "\n" << std::endl;

	/**
	 * @test Max and min functions
	 */
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << "\n" << std::endl;


	/**
	 * @test Decrement operator
	 */
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << "\n" << std::endl;

	a++;
	std::cout << a << "\n" << std::endl;

	/**
	 * @test Arithmetic operators
	 */
	std::cout << (a + b) << std::endl;
	std::cout << (a - b) << std::endl;
	std::cout << (a * b) << std::endl;
	std::cout << (a / b) << "\n" << std::endl;

	/**
	 * @test Comparison operators
	 */
	std::cout << (a > b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;
	return (0);
}
