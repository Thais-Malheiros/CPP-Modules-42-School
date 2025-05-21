/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:08:08 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/06 16:47:15 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout<< "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout<< "ScavTrap parametrized constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout<< "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout<< "ScavTrap default destructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
		std::cout << "Assignment performed: ScavTrap copied from ";
		std::cout << other.getName() << std::endl;
	}
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate Keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << "Who are you trying to attack, bro?" << std::endl;
	else if (!this->getHitPoints())
		std::cout << "ScavTrap " << getName() << " does not have enough hit points to attack" << std::endl;
	else if (!this->getEnergyPoints())
		std::cout << "ScavTrap " << getName() << " does not have enough energy points to attack" << std::endl;
	else
	{
		this->setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing ";
		std::cout << this->getAttackDamage() << " points of damage. ";
		std::cout << this->getName() << " now has " << this->getEnergyPoints();
		std::cout << " energy points."  << std::endl;
	}
}
