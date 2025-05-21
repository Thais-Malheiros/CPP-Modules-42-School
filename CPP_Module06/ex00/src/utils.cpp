/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:41:11 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/28 12:12:21 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

void	SafeConvert(const std::string &updatedInput) {
	char	*end;
	std::strtod(updatedInput.c_str(), &end);
	if (*end && (updatedInput != "+inf" && updatedInput != "-inf" && updatedInput != "+inff" && updatedInput != "-inff"))
		throw std::invalid_argument("impossible to convert");
	errno = 0;
	if (errno == ERANGE)
		throw std::out_of_range("out of range error");
}

int CountPrecision(const std::string &input) {
	int precision = 0;
	size_t dot_pos = input.find('.');
	if (dot_pos != std::string::npos)
		precision = input.size() - dot_pos - 1;
	return precision;
}


bool	IsChar(const std::string &input) {
	if (input.length() == 1 && !std::isdigit(input[0]))
		return (true);
	return (false);
}

std::string	CheckForF(const std::string &input) {
	if (input.length() > 1 && ((input [input.length() - 1] == 'f'
		|| input [input.length() - 1] == 'F') && (input != "-inff" && input != "+inff" && input != "-inf" && input != "+inf")))
		return (input.substr(0, input.length() - 1));
	return (input);
}

void	CheckNull(const std::string &input) {
	if (!input[0])
		throw std::invalid_argument("empty argument");
}

std::string	CheckInput(const std::string &input) {
	CheckNull(input);
	std::string updatedInput = CheckForF(input);
	return (updatedInput);
}
