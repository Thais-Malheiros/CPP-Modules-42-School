/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:23:55 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/28 10:57:36 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc == 2)
	try {
		ScalarConverter::convert(argv[1]);
	}
	catch (const std::overflow_error &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	catch (const std::invalid_argument &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
