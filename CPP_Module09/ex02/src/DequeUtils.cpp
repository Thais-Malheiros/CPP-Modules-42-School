/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DequeUtils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:33:32 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 16:35:28 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DequeUtils.hpp"

DequeUtils::DequeUtils() {}

DequeUtils::DequeUtils(const DequeUtils& other)
{
	(void)other;
	std::cout << "Cannot instantiate a DequeUtils object." << std::endl;
}

DequeUtils& DequeUtils::operator=(const DequeUtils& other)
{
	(void)other;
	std::cout << "A DequeUtils object cannot be assigned to other." << std::endl;
	return (*this);
}

DequeUtils::~DequeUtils() {}

void	DequeUtils::printDeque(const std::deque<int>& deque)
{
	std::cout << "After deque sort: ";
	for (size_t idx = 0; idx < deque.size(); idx++)
		std::cout << deque[idx] << " ";
	std::cout << std::endl;
}

static void	insertExtraElement(std::deque<int>& deque, int ExtraElement)
{
	int	low = 0;
	int	high = deque.size();
	int	mid;

	while (low < high)
	{
		mid = low + (high - low) / 2;
		if (deque[mid] < ExtraElement)
			low = mid + 1;
		else
			high = mid;
	}
	deque.insert(deque.begin() + low, ExtraElement);
}

std::deque<int>	DequeUtils::recursiveDequeSort(std::deque<int>& deque)
{
	int									extraElement;
	std::deque<std::pair<int, int> >	dequePairs;
	std::deque<int>						dequeGroupA;
	std::deque<int>						dequeGroupB;

	setDequeInPairs(deque, dequePairs);
	orderDequePairsInternally(dequePairs, dequeGroupA, dequeGroupB, extraElement);
	if (dequeGroupA.size() >= 4)
		dequeGroupA = recursiveDequeSort(dequeGroupA);
	else if (dequeGroupA.size() == 3)
		orderDequeInThree(dequeGroupA);
	else
		orderDequeInTwo(dequeGroupA);
	recursiveInsertB(dequeGroupA, dequeGroupB);
	if (extraElement)
		insertExtraElement(dequeGroupA, extraElement);
	return(dequeGroupA);
}

void	DequeUtils::setDequeInPairs(std::deque<int>& deque,
	std::deque<std::pair<int, int> >& dequePairs)
{
	size_t	idx = 0;
	while (idx + 1 < deque.size())
	{
		dequePairs.push_back(std::make_pair(deque[idx], deque[idx + 1]));
		idx += 2;
	}
	if (deque.size() % 2 != 0)
		dequePairs.push_back(std::make_pair(deque.back(), -1));
}

void	DequeUtils::orderDequePairsInternally(std::deque<std::pair<int, int> >& dequePairs,
	std::deque<int>& dequeGroupA, std::deque<int>& dequeGroupB, int& extraElement)
{
	for (size_t idx = 0; idx < dequePairs.size(); idx++) {
		if (dequePairs[idx].first > dequePairs[idx].second)
		{
			dequeGroupA.push_back(dequePairs[idx].first);
			dequeGroupB.push_back(dequePairs[idx].second);
		}
		else
		{
			dequeGroupA.push_back(dequePairs[idx].second);
			dequeGroupB.push_back(dequePairs[idx].first);
		}
	}
	if (!dequeGroupB.empty() && dequeGroupB[dequeGroupB.size() - 1] == -1)
	{
		dequeGroupB.pop_back();
		extraElement = dequeGroupA[dequeGroupA.size() - 1];
		dequeGroupA.pop_back();
	}
	else
		(void)extraElement;
}

void	DequeUtils::orderDequeInTwo(std::deque<int>& deque)
{
	if (deque[0] > deque[1])
		std::swap(deque[0], deque[1]);
}

void	DequeUtils::orderDequeInThree(std::deque<int>& deque)
{
	if (deque[0] > deque[1])
		std::swap(deque[0], deque[1]);
	if (deque[1] > deque[2])
		std::swap(deque[1], deque[2]);
	if (deque[0] > deque[1])
		std::swap(deque[0], deque[1]);
}

void	DequeUtils::recursiveInsertB(std::deque<int>&dequeGroupA, std::deque<int>& dequeGroupB)
{
	int	low = 0;
	int	high = dequeGroupA.size();
	int	mid;

	if (dequeGroupB.empty())
		return;
	while (low < high)
	{
		mid = low + (high - low) / 2;
		if (dequeGroupA[mid] < dequeGroupB.front())
			low = mid + 1;
		else
			high = mid;
	}
	dequeGroupA.insert(dequeGroupA.begin() + low, dequeGroupB.front());
	dequeGroupB.pop_front();
	recursiveInsertB(dequeGroupA, dequeGroupB);
}
