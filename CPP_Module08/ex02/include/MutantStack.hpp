/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:30:49 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/05 15:37:56 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class	MutantStack : public std::stack<T> {
	public:
		//canonical form
		MutantStack(void) : std::stack<T>() {}
		MutantStack(const MutantStack& other) : std::stack<T>(other) {}
		MutantStack& operator=(const MutantStack& other) {
			if (this != &other)
				std::stack<T>::operator=(other);
			return (*this);
		}
		~MutantStack(void) {};
		//iterators
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator rev_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_rev_iterator;

		iterator begin() {
			return (std::stack<T>::c.begin());
		}
		iterator end() {
			return (std::stack<T>::c.end());
		}
		const_iterator begin() const {
			return (std::stack<T>::c.begin());
		}
		const_iterator end() const {
			return (std::stack<T>::c.end());
		}
		rev_iterator rbegin() {
			return (std::stack<T>::c.rbegin());
		}
		rev_iterator rend() {
			return (std::stack<T>::c.rend());
		}
		const_rev_iterator rbegin() const {
			return (std::stack<T>::c.rbegin());
		}
		const_rev_iterator rend() const {
			return (std::stack<T>::c.rend());
		}
};

#endif