/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ListUtils.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:33:48 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 14:57:38 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTUTILS_HPP
# define LISTUTILS_HPP

# include <list>
# include <iostream>
# include <iterator>

class	ListUtils
{
	private:
		ListUtils();
		ListUtils(const ListUtils& other);
		ListUtils& operator=(const ListUtils& other);
		~ListUtils();
	public:
		static std::list<int>	recursiveListSort(std::list<int>& deque);
		static void	setListInPairs(std::list<int>& list,
			std::list<std::pair<int, int> >& listPairs);
		static void	orderListPairsInternally(std::list<std::pair<int, int> >& dequePairs,
			std::list<int>& listGroupA, std::list<int>& listGroupB, int& extraElement);
		static void	orderListInTwo(std::list<int>& list);
		static void	orderListInThree(std::list<int>& list);
		static void	recursiveInsertB(std::list<int>&listGroupA, std::list<int>& listGroupB);
		static void	printList(const std::list<int>& list);
};

#endif