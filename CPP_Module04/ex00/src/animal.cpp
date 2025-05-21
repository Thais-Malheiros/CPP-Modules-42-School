/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:07:48 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:11:40 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/animal.hpp"

Animal::Animal(void) : _type("undefined")
{
	std::cout << "Animal default constructor was called." << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal parametrized constructor was called." << std::endl;
}

Animal::Animal(const Animal& other)
{
	*this = other;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Assignment performed: animal copied. ";
	return (*this);
}

const std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Some random animal makes some random sound." << std::endl;
}
