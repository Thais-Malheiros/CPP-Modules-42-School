/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:41:43 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 12:30:50 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cat.hpp"
#include <sstream>

Cat::Cat(void) : AAnimal()
{
	_type = "Cat";
	_catBrain = new Brain("I'm tired.");
	std::cout << "Cat default constructor was called.";
	std::cout << " It's type is assigned to " << _type << std::endl;
}

Cat::Cat(const std::string type) : AAnimal(type)
{
	_catBrain = new Brain("I'm tired");
	std::cout << "Brain parametrized constructor was called." << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	*this = other;
	this->_catBrain = new Brain(*other._catBrain);
	std::cout << "Cat copy constructor called." << std::endl;
}
Cat::~Cat(void)
{
	delete (_catBrain);
	std::cout << "Cat destructor called." << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		delete (this->_catBrain);
		this->_catBrain = new Brain(*other._catBrain);
	}
	std::cout << "Assignment performed: cat copied. ";
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meooowww!" << std::endl;
}

