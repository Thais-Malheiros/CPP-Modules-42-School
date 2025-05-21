/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:01:14 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/06 12:21:35 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int	main(void)
{
	try {
		std::cout << "-----TEST WITH AN EXISTING NUMBER IN THE VECTOR-------\n";
		std::vector<int> vector1;
		vector1.push_back(8);
		vector1.push_back(4);
		vector1.push_back(5);
		vector1.push_back(9);
		easyfind(vector1, 9);

		std::cout << "\n---TEST WITH A NUMBER APPEARING 2 TIMES-------------\n";
		std::vector<int> vector3;
		vector3.push_back(8);
		vector3.push_back(4);
		vector3.push_back(5);
		vector3.push_back(9);
		vector3.push_back(10);
		vector3.push_back(11);
		vector3.push_back(12);
		vector3.push_back(13);
		vector3.push_back(10);
		vector3.push_back(11);
		easyfind(vector3, 10);

		std::cout << "\n---TEST WITH A LIST CONTAINER-----------------------\n";
		std::list<int> list;
		list.push_front(4);
		list.push_front(42);
		list.push_back(107);
		easyfind(list, 42);

		std::cout << "\n---TEST WITH A DEQUE CONTAINER----------------------\n";
		std::deque<int> deq;
		deq.push_front(-2);
		deq.push_front(-789);
		deq.push_front(22);
		deq.push_front(1319);
		deq.push_front(7);
		deq.push_front(301);
		easyfind(deq, 1319);

		std::cout << "\n---TEST WITH A NON EXISTING NUMBER IN THE VECTOR----\n";
		std::vector<int> vector2;
		vector2.push_back(8);
		vector2.push_back(4);
		vector2.push_back(5);
		vector2.push_back(9);
		easyfind(vector2, 10);
	}
	catch (std::exception& e) {
		std::cerr << "exception caught: " << e.what() << std::endl;
	}
	return (0);
}
