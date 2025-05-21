/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:10:15 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 19:25:02 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Parser.hpp"

Parser::Parser() {}

Parser::Parser(const Parser& other)
{
	(void)other;
	std::cout << "Cannot instantiate a parser object." << std::endl;
}

Parser& Parser::operator=(const Parser& other)
{
	(void)other;
	std::cout << "A Parser object cannot be assigned to other." << std::endl;
	return (*this);
}

Parser::~Parser() {}

void	Parser::checkArgCount(int args)
{
	if (args < 2)
		throw std::invalid_argument("wrong number of arguments.");
}

void	Parser::checkArgsAreIntegers(int nbr, char **input)
{
	for (int idx1 = 1; idx1 < nbr; idx1++) {
		int	idx2 = 0;
		while (input[idx1][idx2]) {
			if (!std::isdigit(input[idx1][idx2]))
				throw std::invalid_argument("input is not a positive integer.");
			idx2++;
		}
	}
}

void	Parser::makeArgsIntoString(int argc, char **argv, std::string& allArgs)
{
	for (int idx = 1; idx < argc; idx++) {
		allArgs += argv[idx];
		if (idx < argc - 1)
			allArgs += " ";
	}
}

void	Parser::loadDeque(std::string& allArgs, std::deque<int>& argsInDeque)
{
	std::string			tmpStr;
	std::stringstream	tmpStream(allArgs);

	while (std::getline(tmpStream, tmpStr, ' '))
		argsInDeque.push_back(std::atoi(tmpStr.c_str()));
	checkArgsDuplicates(argsInDeque);
}

void	Parser::checkArgsDuplicates(std::deque<int>& argsInDeque)
{
	std::set<int> 		tmpSet;

	for (std::deque<int>::const_iterator it = argsInDeque.begin(); it != argsInDeque.end(); it++) {
		if (tmpSet.find(*it) != tmpSet.end())
			throw std::invalid_argument("duplicated numbers.");
		tmpSet.insert(*it);
	}
}

void	Parser::loadList(std::string& allArgs, std::list<int>& argsInList)
{
	std::string			tmpStr;
	std::stringstream	tmpStream(allArgs);

	while (std::getline(tmpStream, tmpStr, ' '))
		argsInList.push_back(std::atoi(tmpStr.c_str()));
}

void	Parser::printAllArgs(std::string& allArgs)
{
	std::cout << "Before: " << allArgs << std::endl;
	std::cout << "**************************************************************" << std::endl;
}
