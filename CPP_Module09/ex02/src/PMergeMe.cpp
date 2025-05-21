/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:28:45 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 16:49:04 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PMergeMe.hpp"

PMergeMe::PMergeMe() {}

PMergeMe::PMergeMe(const PMergeMe& other)
{
	(void)other;
	std::cout << "Cannot instantiate a PMergeMe object." << std::endl;
}

PMergeMe& PMergeMe::operator=(const PMergeMe& other)
{
	(void)other;
	std::cout << "A PMergeMe object cannot be assigned to other." << std::endl;
	return (*this);
}

PMergeMe::~PMergeMe() {}

void	PMergeMe::fordJohnsonDequeSort(std::deque<int>& deque)
{
	double			duration;
	clock_t			start;
	clock_t			end;
	std::deque<int>	orderedDeque;

	start = clock();
	orderedDeque = DequeUtils::recursiveDequeSort(deque);
	end = clock();
	DequeUtils::printDeque(orderedDeque);
	duration = (double)(end - start) / CLOCKS_PER_SEC * 1e6;
	std::cout << BLUE << "Time to process a range of " << deque.size()
			<< " elements with std::deque: " << duration << "us" << RESET << std::endl;
}

void	PMergeMe::fordJohnsonListSort(std::list<int>& list)
{
	double			duration;
	clock_t			start;
	clock_t			end;
	std::list<int>	orderedList;

	start = clock();
	orderedList = ListUtils::recursiveListSort(list);
	end = clock();
	ListUtils::printList(orderedList);
	duration = (double)(end - start) / CLOCKS_PER_SEC * 1e6;
	std::cout << BLUE << "Time to process a range of " << list.size()
		<< " elements with std::list: " << duration << "us" << RESET << std::endl;
}
