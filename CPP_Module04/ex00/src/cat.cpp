/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:41:43 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:16:00 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cat.hpp"

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	std::cout << "Cat default constructor was called.";
	std::cout << " It's type is assigned to " << _type << std::endl;
}

Cat::Cat(const std::string type) : Animal(type)
{
	std::cout << "Cat parametrized constructor was called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	*this = other;
	std::cout << "Cat copy constructor called." << std::endl;
}
Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Assignment performed: cat copied. ";
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meooowww!" << std::endl;
}
