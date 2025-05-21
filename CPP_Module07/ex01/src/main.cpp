/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:25:42 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/24 14:45:27 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

void	toUpper(std::string& element) {
	for (size_t idx = 0; idx < element.length(); idx++)
		element[idx] = std::toupper(element[idx]);
}

template<typename T>
void	printDouble(T& element) {
	element *= 2;
}

template<typename T>
void	print(T& element) {
	std::cout << element << std::endl;
}

int	main(void) {
	int			arrayInt[] = {1, 25, 50, 75, 100};
	double		arrayDouble[] = {1.4, 42.05, -54.16};
	std::string	array_names[] = {"Mary", "John", "Peter", "Jane"};

	std::cout << "---------- TEST WITH INTEGERS ----------" << std::endl;
	::iter(arrayInt, 5, print);
	::iter(arrayInt, 5, printDouble);
	::iter(arrayInt, 5, print);

	std::cout << "---------- TEST WITH DOUBLES ----------" << std::endl;
	::iter(arrayDouble, 3, print);
	::iter(arrayDouble, 3, printDouble);
	::iter(arrayDouble, 3, print);

	std::cout << "---------- TEST WITH STRINGS ----------" << std::endl;
	::iter(array_names, 4, print);
	::iter(array_names, 4, toUpper);
	::iter(array_names, 4, print);
	return (0);
}
