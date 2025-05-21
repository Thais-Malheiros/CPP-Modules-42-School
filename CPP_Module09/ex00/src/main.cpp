/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:01:14 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/08 14:56:18 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include "../include/Parser.hpp"

int	main(int argc, char **argv)
{
	try {
		std::ifstream	inputFile;
		std::ifstream	dataFile;
		std::map<std::string, double>	btcData;

		Parser::checkArgc(argc);
		Parser::processFileName(argv[1]);
		Parser::openFile(std::string(argv[1]), inputFile);
		Parser::openFile("data.csv", dataFile);
		loadBtcData(dataFile, btcData);
		Parser::processFile(inputFile, btcData);
		inputFile.close();
		dataFile.close();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
