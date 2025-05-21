/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:51:37 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 13:58:08 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std:: string name) : _name(name) {

    std::cout << _name << " is not armed yet!" << std::endl;
}

HumanB::~HumanB(void) {

    std::cout << _name << " is going home." << std::endl;
}

void    HumanB::setWeapon(Weapon& weaponOfChoice) {

    _weapon = &weaponOfChoice;
    std::cout << _name << " is now armed!" << std::endl;
}

void    HumanB::attack(void) {

    if (_weapon != NULL)
        std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon to attack with!" << std::endl;
}
