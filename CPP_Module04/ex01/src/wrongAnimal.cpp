/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:06:30 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:20:19 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/wrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("undefined")
{
	std::cout << "WrongAnimal default constructor was called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "WrongAnimal parametrized constructor was called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Assignment performed: Wronganimal copied. ";
	return (*this);
}

const std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Some random WrongAnimal makes some random sound." << std::endl;
}
