/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:38:06 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/17 18:50:11 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Parser.hpp"
#include "../include/BitcoinExchange.hpp"

Parser::Parser() {};

Parser::Parser(const Parser& other) {
	(void)other;
	std::cerr << "Error: A Parser object cannot be instantiated." << std::endl;
};

Parser& Parser::operator=(const Parser& other) {
	(void)other;
	std::cerr << "Error: A Parser object cannot be assigned to other." << std::endl;
	return (*this);
}

Parser::~Parser() {};

static bool	checkSeparator(const std::string& separator)
{
	if (separator[1] != ' ' || separator[2] != '|' || separator[3] != ' ')
		return (false);
	return (true);
}

static bool	isValidDate(const std::string& dateInput)
{
	if (dateInput[4] != '-' || dateInput[7] != '-')
		return (false);
	for (size_t idx = 0; idx < dateInput.length(); ++idx) {
		if (idx == 4 || idx == 7)
			continue;
		if (!std::isdigit(dateInput[idx]))
			return (false);
	}
	return (true);
}

static bool	isLeapYear(int year)
{
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		return (true);
	return (false);
}

static bool	checkDate(const std::string& dateInput)
{
	if (!isValidDate(dateInput))
		return(false);
	int year = std::atoi(dateInput.substr(0, 4).c_str());
	int month = std::atoi(dateInput.substr(5, 2).c_str());
	int day = std::atoi(dateInput.substr(8, 2).c_str());
	if (month < 1 || month > 12)
		return (false);
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && isLeapYear(year))
		daysInMonth[1] = 29;
	if (day < 1 || day > daysInMonth[month - 1])
		return (false);
	return (true);
}

static bool	checkValue(const std::string& value)
{
	for (size_t idx = 0; idx < value.length(); idx++)
	{
		if (!std::isdigit(value[idx]) && value[idx] != '.')
			return (false);
	}
	int nbr = std::atof(value.c_str());
	if (nbr < 1 || nbr > 1000)
		return (false);
	return (true);
}

void	Parser::checkArgc(int argc)
{
	if (argc != 2)
		throw std::logic_error("Error: missing file.");
}

void	Parser::processFileName(char *fileName)
{
	std::string	input(fileName);
	if (input.length() < 4 || input.compare(input.length() - 4, 4, ".txt"))
		throw std::logic_error("Error: wrong file extension.");
}

void	Parser::openFile(const std::string& fileName, std::ifstream& file)
{
	file.open (fileName.c_str(), std::ifstream::in);
	if (!file.is_open())
		throw std::invalid_argument("Error: could not open file.");
}
void	Parser::processFile(std::ifstream& ifs, const std::map<std::string,
	double>& btcData)
{
	std::string	line;
	while (std::getline(ifs, line))
	{
		if (line.size() < 14)
			std::cout << "Error: incomplete input => " << line.substr(0) << std::endl;
		else if (checkSeparator(line.substr(10)))
			std::cout << "Error: wrong input format." << std::endl;
		else if (!checkDate(line.substr(0, 10)))
			std::cout << "Error: bad date input => " << line.substr(0,10) << std::endl;
		else if (!checkValue(line.substr(13)))
			std::cout << "Error: bad value input => " << line.substr(13) << std::endl;
		else {
			std::map<std::string, double>::const_iterator it = btcData.lower_bound(line.substr(0, 10));
			if (it == btcData.end() || it != btcData.begin())
				it--;
			std::cout << line.substr(0, 10) << " => " << line.substr(13) << " = " << (std::atof(line.substr(13).c_str()) * it->second) << std::endl;
		}
	}
}

