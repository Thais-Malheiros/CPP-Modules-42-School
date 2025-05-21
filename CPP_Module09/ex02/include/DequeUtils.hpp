/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DequeUtils.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:33:48 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/15 15:08:06 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUEUTILS_HPP
# define DEQUEUTILS_HPP

# include <deque>
# include <iostream>

class	DequeUtils
{
	private:
		DequeUtils();
		DequeUtils(const DequeUtils& other);
		DequeUtils& operator=(const DequeUtils& other);
		~DequeUtils();
	public:
		static std::deque<int>	recursiveDequeSort(std::deque<int>& deque);
		static void	orderDequePairsInternally(std::deque<std::pair<int, int> >& dequePairs,
			std::deque<int>& dequeGroupA, std::deque<int>& dequeGroupB, int& extraElement);
		static void	setDequeInPairs(std::deque<int>& deque,
			std::deque<std::pair<int, int> >& dequePairs);
		static void	orderDequeInTwo(std::deque<int>& deque);
		static void	orderDequeInThree(std::deque<int>& deque);
		static void	recursiveInsertB(std::deque<int>&dequeGroupA, std::deque<int>& dequeGroupB);
		static void	printDeque(const std::deque<int>& deque);
};

#endif