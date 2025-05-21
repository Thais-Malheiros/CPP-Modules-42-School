/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:13:30 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/15 14:56:40 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <ctime>
# include "DequeUtils.hpp"
# include "ListUtils.hpp"
# include "Parser.hpp"

class	PMergeMe
{
	private:
		PMergeMe();
		PMergeMe(const PMergeMe& other);
		PMergeMe& operator=(const PMergeMe& other);
		~PMergeMe();
	public:
		static void	fordJohnsonDequeSort(std::deque<int>& deque);
		static void	fordJohnsonListSort(std::list<int>& list);
};

#endif