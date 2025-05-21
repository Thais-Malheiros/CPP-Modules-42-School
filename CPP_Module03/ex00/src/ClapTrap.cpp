/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:36:24 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/06 16:47:15 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitPts(10), _enePts(10), _attDamage(0)
{
	std::cout<< "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPts(10), _enePts(10), _attDamage(0)
{
	std::cout<< "Parametrized constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout<< "Copy constructor called." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout<< "Default destructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
		std::cout << "Assignment performed: ClapTrap copied from ";
		std::cout << other.getName() << std::endl;
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const {return (_name);}

unsigned int	ClapTrap::getHitPoints(void) const {return (_hitPts);}

unsigned int	ClapTrap::getEnergyPoints(void) const {return (_enePts);}

unsigned int	ClapTrap::getAttackDamage(void) const {return (_attDamage);}

void	ClapTrap::setName(const std::string name) {_name = name;}

void	ClapTrap::setHitPoints(unsigned int hitPts) {_hitPts = hitPts;}

void	ClapTrap::setEnergyPoints(unsigned int enePts) {_enePts = enePts;}

void	ClapTrap::setAttackDamage(unsigned int attDamage) {_attDamage = attDamage;}

void	ClapTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << "Who are you trying to attack, bro?" << std::endl;
	else if (!this->getHitPoints())
		std::cout << "Not enough hit points to attack" << std::endl;
	else if (!this->getEnergyPoints())
		std::cout << "Not enough energy points to attack" << std::endl;
	else
	{
		this->setEnergyPoints(getEnergyPoints() - 1);
		std::cout << this->getName() << " attacks " << target << " causing ";
		std::cout << this->getAttackDamage() << " points of damage. ";
		std::cout << this->getName() << " now has " << this->getEnergyPoints();
		std::cout << " energy points."  << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
		std::cout << "Amount must be greater than zero." << std::endl;
	else if (!this->getHitPoints())
		std::cout << "Not enough hit points to take damage" << std::endl;
	else if (!this->getEnergyPoints())
		std::cout << "Not enough energy points to take damage" << std::endl;
	else
	{
		if ((int)(getHitPoints() - amount) < 0)
		{
			setHitPoints(0);
			std::cout << this->getName() << " takes damage of " << amount;
			std::cout << " hit points. " << this->getName() << " now has " ;
			std::cout << " zero hit points."  << std::endl;
		}
		else
		{
			this->setHitPoints(getHitPoints() - amount);
			std::cout << this->getName() << " takes damage of " << amount;
			std::cout << " hit points. " << this->getName() << " now has " ;
			std::cout << this->getHitPoints() << " hit points."  << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
		std::cout << "Amount must be greater than zero." << std::endl;
	else if (!this->getHitPoints())
	{
		std::cout << this->getName();
		std::cout << " doesn't have enough hit points to repair itself" << std::endl;
	}
	else if (!this->getEnergyPoints())
	{
		std::cout << this->getName();
		std::cout << " doesn't have enough energy points to repair itself" << std::endl;
	}
	else
	{
		this->setEnergyPoints(getEnergyPoints() - 1);
		this->setHitPoints(getHitPoints() + amount);
		std::cout << this->getName() << " repaired itself and got " << amount;
		std::cout << " hit points back. It now has " << this->getHitPoints();
		std::cout << " hit points and " << this->getEnergyPoints();
		std::cout << " energy points."  << std::endl;
	}
}
