/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:58:54 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/05 11:01:25 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(unsigned int N) : _size(N) {}

Span::Span(const Span& other) : _size(other._size), _numbers(other._numbers) {}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		_size = other._size;
		_numbers = other._numbers;
	}
	return (*this);
}

Span::~Span(void) {}

void	Span::addNumber(int nbr) {
	if (_numbers.size() < _size)
		_numbers.push_back(nbr);
	else
		throw std::length_error("Span is already full.");
}

int	Span::shortestSpan(void) {
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough elements to calculate span.");
	int	span = std::numeric_limits<int>::max();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	for (size_t idx = 1; idx < sorted.size(); idx++) {
		if (sorted[idx] - sorted[idx - 1] <= span)
			span = sorted[idx] - sorted[idx - 1];
	}
	return (span);
}

int	Span::longestSpan(void) {
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough elements to calculate span.");
	int span = (*std::max_element(_numbers.begin(), _numbers.end())
		- *std::min_element(_numbers.begin(), _numbers.end()));
	return (span);
}

void	Span::populateRandomly(unsigned int count) {
	std::vector<int> temp;
	for (unsigned int idx = 0; idx < count; idx++) {
		temp.push_back(std::rand());
	}
	this->range(temp.begin(), temp.end());
}
