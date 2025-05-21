/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:56:47 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 19:06:17 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int	main(int argc, char **argv) {
	std::stack<int> st;

	try {
		if (argc == 2 && *argv[1]) {
			RPN::checkInput(argv[1]);
			RPN::loadStack(argv[1], st);
		}
		else
			std::cout << "Error: wrong number of arguments." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
