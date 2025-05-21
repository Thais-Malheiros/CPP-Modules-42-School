/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:56:47 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/05 11:24:11 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int	main(void) {
	std::srand(std::time(NULL));

	std::cout << "-----Just showing rand max value-------------\n" << std::endl;
	std::cout << "RAND_MAX: " << RAND_MAX << "\n"
		<< "INT_MAX: " << INT_MAX << "\n" << std::endl;

	try {

		std::cout << "-----TEST 1: let's add some numbers----------\n" << std::endl;

		Span	sp1(5);

		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);

		std::cout << "shortest span: " << sp1.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp1.longestSpan() << "\n" << std::endl;

		std::cout << "-----TEST 2: let's add some more numbers------\n" << std::endl;

		Span	sp2(10000);

		for (int idx = 0; idx < 1000; idx++)
			sp2.addNumber(std::rand());

		std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp2.longestSpan() << "\n"  << std::endl;

		std::cout << "-----TEST 3: test populateRandomly function--\n" << std::endl;

		Span	sp3(10);
		sp3.populateRandomly(10);

		std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp3.longestSpan() << "\n" << std::endl;

		std::cout << "-----TEST 4: populateRandomly error----------\n" << std::endl;

		Span	sp4(20);
		sp4.populateRandomly(30);

	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
