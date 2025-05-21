/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:27:45 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/30 10:43:10 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

int main(void) {
	try {
		std::cout << "\n--- TEST 1: EMPTY ARRAY ----------------------------\n";
		Array<int> a;
		std::cout << "Array size: " << a.size() << std::endl;

		std::cout << "\n--- TEST 2: ARRAY WITH 5 INTEGERS ------------------\n";
		Array<int> b(5);
		for (unsigned int idx = 0; idx < b.size(); idx++) {
			b[idx] = idx * 10;
			std::cout << "b[" << idx << "] = " << b[idx] << std::endl;
		}
		std::cout << "Array size: " << b.size() << std::endl;

		std::cout << "\n--- TEST 3: COPY AND INDEPENDENCY ------------------\n";
		Array<int> c(b);
		b[0] = 42;
		std::cout << "b[0] now is " << b[0] << ", but c[0] is still " << c[0] << std::endl;

		std::cout << "\n--- TEST 4: OPERATOR OVERLOAD ----------------------\n";
		Array<int> d;
		d = b;
		b[1] = 84;
		std::cout << "b[1] now is " << b[1] << ", but d[1] is still " << d[1] << std::endl;

		std::cout << "\n--- TEST 5: ARRAY WITH 3 STRINGS -------------------\n";
		Array<std::string> e(3);
		e[0] = "one";
		e[1] = "two";
		e[2] = "three";
		for (unsigned int idx = 0; idx < e.size(); idx++)
			std::cout << "e[" << idx << "] = " << e[idx] << std::endl;

		std::cout << "\n--- TEST 6: THROWING A RANGE EXCEPTION  ----------------\n";
		std::cout << b[10] << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
