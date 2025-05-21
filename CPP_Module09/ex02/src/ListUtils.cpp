/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ListUtils.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:33:32 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 16:36:11 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ListUtils.hpp"

ListUtils::ListUtils() {}

ListUtils::ListUtils(const ListUtils& other)
{
	(void)other;
	std::cout << "Cannot instantiate a ListUtils object." << std::endl;
}

ListUtils& ListUtils::operator=(const ListUtils& other)
{
	(void)other;
	std::cout << "A ListUtils object cannot be assigned to other." << std::endl;
	return (*this);
}

ListUtils::~ListUtils() {}

void	ListUtils::printList(const std::list<int>& list)
{
	std::cout << "After list sort: ";
	for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

static void	insertExtraElement(std::list<int>& list, int extraElement)
{
	int	low = 0;
	int	high = list.size();
	int	mid;
	std::list<int>::iterator	it;

	while (low < high)
	{
		mid = low + (high - low) / 2;
		it = list.begin();
		std::advance(it, mid);
		if (*it < extraElement)
			low = mid + 1;
		else
			high = mid;
	}
	it = list.begin();
	std::advance(it, low);
	list.insert(it, extraElement);
}

std::list<int>	ListUtils::recursiveListSort(std::list<int>& list)
{
	int									extraElement;
	std::list<std::pair<int, int> >		listPairs;
	std::list<int>						listGroupA;
	std::list<int>						listGroupB;

	setListInPairs(list, listPairs);
	orderListPairsInternally(listPairs, listGroupA, listGroupB, extraElement);
	if (listGroupA.size() >= 4)
		listGroupA = recursiveListSort(listGroupA);
	else if (listGroupA.size() == 3)
		orderListInThree(listGroupA);
	else
		orderListInTwo(listGroupA);
	recursiveInsertB(listGroupA, listGroupB);
	if (extraElement)
		insertExtraElement(listGroupA, extraElement);
	return(listGroupA);
}

void	ListUtils::setListInPairs(std::list<int>& list,
	std::list<std::pair<int, int> >& listPairs)
{
	std::list<int>::iterator it = list.begin();

	while (it != list.end())
	{
		std::list<int>::iterator next = it;
		++next;
		if (next != list.end())
		{
			listPairs.push_back(std::make_pair(*it, *next));
			it = next;
			++it;
		}
		else
		{
			listPairs.push_back(std::make_pair(*it, -1));
			break;
		}
	}
}

void	ListUtils::orderListPairsInternally(std::list<std::pair<int, int> >& listPairs,
	std::list<int>& listGroupA, std::list<int>& listGroupB, int& extraElement)
{
	for (std::list<std::pair<int, int> >::iterator it = listPairs.begin(); it != listPairs.end(); it++)
	{
		if (it->first > it->second)
		{
			listGroupA.push_back(it->first);
			listGroupB.push_back(it->second);
		}
		else
		{
			listGroupA.push_back(it->second);
			listGroupB.push_back(it->first);
		}
		if (!listGroupB.empty() && *--listGroupB.end() == -1)
		{
			std::list<int>::iterator lastB = listGroupB.end();
			lastB--;
			listGroupB.pop_back();
			std::list<int>::iterator lastA = listGroupA.end();
			lastA--;
			extraElement = *lastA;
			listGroupA.pop_back();
		}
		else
			(void)extraElement;
	}
}

void	ListUtils::orderListInTwo(std::list<int>& list)
{
	std::list<int>::iterator first = list.begin();
	std::list<int>::iterator scnd = list.begin();

	scnd++;
	if (*first > *scnd)
		std::swap(*first, *scnd);
}

void	ListUtils::orderListInThree(std::list<int>& list)
{
	std::list<int>::iterator first = list.begin();
	std::list<int>::iterator scnd = list.begin();
	std::list<int>::iterator third = list.end();

	++scnd;
	--third;
	if (*first > *scnd)
		std::swap(*first, *scnd);
	if (*scnd > *third)
		std::swap(*scnd, *third);
	if (*first > *scnd)
		std::swap(*first, *scnd);
}

void	ListUtils::recursiveInsertB(std::list<int>&listGroupA, std::list<int>& listGroupB)
{
	int	low = 0;
	int	high = listGroupA.size();
	int	mid;
	std::list<int>::iterator	it;

	if (listGroupB.empty())
		return;
	while (low < high)
	{
		mid = low + (high - low) / 2;
		it = listGroupA.begin();
		std::advance(it, mid);
		if (*it < listGroupB.front())
			low = mid  + 1;
		else
			high = mid;
	}
	it = listGroupA.begin();
	std::advance(it, low);
	listGroupA.insert(it, listGroupB.front());
	listGroupB.pop_front();
	recursiveInsertB(listGroupA, listGroupB);
}
