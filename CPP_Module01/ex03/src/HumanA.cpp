/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:49:31 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 11:49:42 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std:: string name, Weapon& weaponOfChoice) : _name(name), _weapon(weaponOfChoice) {

    std::cout << _name << " is armed!" << std::endl;
}

HumanA::~HumanA(void) {
    std::cout << _name << " is going home." << std::endl;
}

void    HumanA::attack(void) {
    std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}
