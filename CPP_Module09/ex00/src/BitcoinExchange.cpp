/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:34:55 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/08 16:25:59 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

void	loadBtcData(std::ifstream& ifs, std::map<std::string, double>& btcData) {
	std:: string line;

	while (std::getline(ifs, line)) {
		double				value;
		std::string 		date;
		std::istringstream	ss(line);

		if (std::getline(ss, date, ',') && ss >> value)
			btcData[date] = value;
	}
}
