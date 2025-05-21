/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:19:19 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:18:10 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/dog.hpp"

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	std::cout << "Dog default constructor was called.";
	std::cout << " It's type is assigned to " << _type << std::endl;
}

Dog::Dog(const std::string type) : Animal(type)
{
	std::cout << "Dog parametrized constructor was called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor called." << std::endl;
}
Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Assignment performed: dog copied. ";
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof!" << std::endl;
}
