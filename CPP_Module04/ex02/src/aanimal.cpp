/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:07:48 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 12:28:26 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/aanimal.hpp"

AAnimal::AAnimal(void) : _type("undefined")
{
	std::cout << "AAnimal default constructor was called." << std::endl;
}

AAnimal::AAnimal(const std::string type) : _type(type)
{
	std::cout << "AAnimal parametrized constructor was called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	*this = other;
	std::cout << "AAnimal copy constructor called." << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called." << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Assignment performed: AAnimal copied. ";
	return (*this);
}

const std::string	AAnimal::getType(void) const
{
	return (_type);
}

