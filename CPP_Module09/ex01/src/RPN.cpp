/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:54:35 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 19:05:25 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN() {};

RPN::RPN(const RPN& other) {
	(void)other;
	std::cout << "Error: not possible to instantiate an RPN object." << std::endl;
}

RPN& RPN::operator=(const RPN& other) {
	(void)other;
	std::cerr << "Error: An RPN object cannot be assigned to other." << std::endl;
	return (*this);
}

RPN::~RPN() {};

static bool	isOperator(char c) {
	if (c != '+' && c != '-' && c != '/' && c != '*')
		return (false);
	return (true);
}

void	RPN::checkInput(std::string input) {
	for (size_t idx = 0; idx < input.length(); idx++) {
		if (!isdigit(input[idx]) && !isOperator(input[idx]) && !isspace(input[idx]))
			throw std::invalid_argument("invalid argument.");
		if (isdigit(input[idx]) && input[idx + 1] && !isspace(input[idx + 1]))
			throw std::invalid_argument("invalid argument.");
	}
}

static int	makeOperation(int nbr1, int nbr2, char opr) {
	switch(opr) {
		case '+':
			return (nbr1 + nbr2);
		case '-':
			return (nbr1 - nbr2);
		case '/': {
			if (nbr2 == 0)
				throw std::invalid_argument("division by zero");
			return (nbr1 / nbr2);
		}
		case '*':
			return (nbr1 * nbr2);
		default:
			throw std::invalid_argument("invalid operator");
	}
}

void	RPN::loadStack(std::string input, std::stack<int>& st) {
	for (size_t idx = 0; idx < input.length(); idx++) {
		if (isdigit(input[idx]))
			st.push((input[idx] - '0'));
		else if (isspace(input[idx]))
			continue;
		else {
			if (st.size() < 2)
				throw std::runtime_error("not enough operands in the stack.");
			int tmp = st.top();
			st.pop();
			int res = makeOperation(st.top(), tmp, input[idx]);
			st.pop();
			st.push(res);
		}
	}
	std::cout << st.top() << std::endl;
}
