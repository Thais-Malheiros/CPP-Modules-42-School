/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:27:44 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/08 14:49:55 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
# define PARSER_HPP

# include <cstdlib>
# include <iostream>
# include <stdexcept>
# include "BitcoinExchange.hpp"

class	Parser {
	private:
		Parser();
		Parser(const Parser& other);
		Parser& operator=(const Parser& other);
		~Parser();
	public:
		static void	checkArgc(int argc);
		static void	processFileName(char *fileName);
		static void	openFile(const std::string& fileName, std::ifstream& ifs);
		static void	processFile(std::ifstream& ifs, const std::map<std::string,
			double>& btcData);
};

#endif
