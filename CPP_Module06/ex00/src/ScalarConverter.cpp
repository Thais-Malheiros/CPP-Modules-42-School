/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:38:24 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/28 12:01:51 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
	std::cout << "Default constructor called." << std::endl;
};

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {
	std::cout << "Operator overload called." << std::endl;
	(void)other;
	return (*this);
};

ScalarConverter::~ScalarConverter(void) {
	std::cout << "Default destructor called." << std::endl;
};

static void	ConvertToDouble(std::string input) {
	try {
		double	nbr;
		if (IsChar(input))
			nbr = static_cast<double>(input[0]);
		else {
			nbr = strtod(input.c_str(), NULL);
			if (std::isnan(nbr))
				throw std::invalid_argument("double: nan");
			if (std::isinf(nbr))
				throw std::invalid_argument("double: inf");
			if (nbr < -std::numeric_limits<double>::max() || nbr > std::numeric_limits<double>::max())
				throw std::invalid_argument("double: impossible");
		}
			int	precision = CountPrecision(input);
			if (precision == 0) {
				std::cout << "double: " << std::fixed << std::setprecision(precision)
				<< static_cast<double>(nbr) << ".0" << std::endl;
			}
			else {
				std::cout << "double: " << std::fixed << std::setprecision(precision)
				<< static_cast<float>(nbr) << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

static void	ConvertToFloat(std::string input) {
	try {
		float	nbr;
		if (IsChar(input))
			nbr = static_cast<float>(input[0]);
		else {
			nbr = strtod(input.c_str(), NULL);
			if (std::isnan(nbr))
				throw std::invalid_argument("float: nanf");
			if (std::isinf(nbr))
				throw std::invalid_argument("float: inff");
			if (nbr < -std::numeric_limits<float>::max() || nbr > std::numeric_limits<float>::max())
				throw std::invalid_argument("float: impossible");
		}
		int	precision = CountPrecision(input);
		if (precision == 0)
			std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
		else {
			std::cout << "float: " << std::fixed << std::setprecision(precision)
			<< static_cast<float>(nbr) << "f" << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

static void	ConvertToInt(std::string input) {
	try {
		int	nbr;
		if (IsChar(input))
			nbr = static_cast<int>(input[0]);
		else {
			double	d = strtod(input.c_str(), NULL);
			if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
				throw std::invalid_argument("int: impossible");
			if (std::isnan(d) || std::isinf(d))
				throw std::invalid_argument("int: impossible");
			nbr = static_cast<int>(d);
		}
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

static void	ConvertToChar(std::string input) {
	try {
		char	c;
		if (IsChar(input))
			c = input[0];
		else {
			double	d = strtod(input.c_str(), NULL);
			if (d < -std::numeric_limits<char>::max() || d > std::numeric_limits<char>::max())
				throw std::invalid_argument("char: impossible");
			if (std::isnan(d) || std::isinf(d))
				throw std::invalid_argument("char: impossible");
			if (!isprint(d))
				throw std::invalid_argument("char: Non displayable");
			c = static_cast<char>(d);
		}
		std::cout << "char: '" << c << "'" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	ScalarConverter::convert(const std::string &input) {
	const std::string updatedInput = CheckInput(input);
	if (!IsChar(updatedInput))
		SafeConvert(updatedInput);
	ConvertToChar(updatedInput);
	ConvertToInt(updatedInput);
	ConvertToFloat(updatedInput);
	ConvertToDouble(updatedInput);
}
