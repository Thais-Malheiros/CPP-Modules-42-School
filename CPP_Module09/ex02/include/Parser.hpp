/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:02:37 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 16:48:38 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
# define PARSER_HPP

# include <cstdlib>
# include <deque>
# include <iostream>
# include <list>
# include <set>
# include <sstream>
# include <string>

#define BLUE	"\033[34m"
#define RESET	"\033[0m"

class	Parser
{
	private:
		Parser();
		Parser(const Parser& other);
		Parser& operator=(const Parser& other);
		~Parser();
	public:
		static void	checkArgCount(int args);
		static void	checkArgsAreIntegers(int argc, char **argv);
		static void	makeArgsIntoString(int argc, char **argv, std::string& allArgs);
		static void	loadDeque(std::string& allArgs, std::deque<int>& argsInDeque);
		static void	checkArgsDuplicates(std::deque<int>& argsInDeque);
		static void	loadList(std::string& allArgs, std::list<int>& argsInList);
		static void	printAllArgs(std::string& allArgs);
};

#endif