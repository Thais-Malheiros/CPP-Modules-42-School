/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:52:05 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/05 11:14:01 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

//std::cout, std::endl
# include <iostream>
//std::numeric_limits
# include <limits>
//INT_MAX
# include <climits>
//std::vector
# include <vector>
//std::max_element, std::min_element, push_back
# include <algorithm>
//std::time
# include <ctime>
//std::rand
# include <cstdlib>


class	Span {
	private:
		unsigned int		_size;
		std::vector<int>	_numbers;
	public:
		//canonical form
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span(void);
		//methods
		void	addNumber(int nbr);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	populateRandomly(unsigned int count);
		//template method
		template<typename InputIterator>
		void	range(InputIterator begin, InputIterator end) {
			for (InputIterator it = begin; it != end; it++) {
				this->addNumber(*it);
			}
		}
	};

#endif
