/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:19:32 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:41:03 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/brain.hpp"
#include <string>
#include <sstream>

Brain::Brain(void)
{
	for (int idx = 0; idx < 100; idx++)
	{
		std::ostringstream	oss;
		oss << (idx + 1);
		_ideas[idx] = oss.str() + ".idea ";
	}
	std::cout << "Brain default constructor was called." << std::endl;
}

Brain::Brain(const std::string idea)
{
	for (int idx = 0; idx < 100; idx++)
	{
		std::ostringstream	oss;
		oss << (idx + 1);
		_ideas[idx] = oss.str() + "." + idea + " ";
	}
	std::cout << "Brain parametrized constructor was called." << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Brain copy constructor was called." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor was called." << std::endl;
}

Brain &Brain::operator=(Brain const &other)
{
	if (this != &other)
	{
		for (int idx = 0; idx < 100; idx++)
			this->_ideas[idx] = other._ideas[idx];
	}
	std::cout << "Assignment performed: brain copied. " << std::endl;
	return (*this);
}

void	Brain::setIdeas(int idx, const std::string idea)
{
	if (idx < 0 || idx >= 100)
		std::cout << "Out of range." << std::endl;
	else
		_ideas[idx] = idea;
}

std::string	Brain::getIdeas(int idx)
{
	if (idx < 0 || idx > 99)
	{
		std::cout << "Out of range." << std::endl;
		return ("");
	}
	return (_ideas[idx]);
}
