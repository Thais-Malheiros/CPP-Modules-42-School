/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:04:08 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 16:33:42 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PMergeMe.hpp"

int	main(int argc, char **argv) {
	try {
		std::string			allArgs;
		std::deque<int>		argsInDeque;
		std::list<int>		argsInList;

		Parser::checkArgCount(argc);
		Parser::checkArgsAreIntegers(argc, argv);
		Parser::makeArgsIntoString(argc, argv, allArgs);
		Parser::loadDeque(allArgs, argsInDeque);
		Parser::loadList(allArgs, argsInList);
		Parser::printAllArgs(allArgs);
		PMergeMe::fordJohnsonDequeSort(argsInDeque);
		PMergeMe::fordJohnsonListSort(argsInList);
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
