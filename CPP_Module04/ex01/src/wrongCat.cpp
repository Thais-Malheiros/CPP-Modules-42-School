/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:08:08 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:22:17 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/wrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor was called.";
	std::cout << " It's type is assigned to " << _type << std::endl;
}

WrongCat::WrongCat(const std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat parametrized constructor was called.";
	std::cout << " It's type is assigned to " << _type << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	*this = other;
	std::cout << "WrongCat copy constructor called." << std::endl;
}
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Assignment performed: WrongCat copied. ";
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meooowww!" << std::endl;
}
