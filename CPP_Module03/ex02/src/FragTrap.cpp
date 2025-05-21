/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:38:23 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/07 10:43:45 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout<< "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout<< "FragTrap parametrized constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout<< "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout<< "FragTrap default destructor called." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
		std::cout << "Assignment performed: FragTrap copied from ";
		std::cout << other.getName() << std::endl;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five, bro!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << "Who are you trying to attack, bro?" << std::endl;
	else if (!this->getHitPoints())
		std::cout << "FragTrap " << getName() << " does not have enough hit points to attack" << std::endl;
	else if (!this->getEnergyPoints())
		std::cout << "FragTrap " << getName() << " does not have enough energy points to attack" << std::endl;
	else
	{
		this->setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "FragTrap " << this->getName() << " attacks " << target << " causing ";
		std::cout << this->getAttackDamage() << " points of damage. ";
		std::cout << this->getName() << " now has " << this->getEnergyPoints();
		std::cout << " energy points."  << std::endl;
	}
}
