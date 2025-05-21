/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:55:26 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 11:55:40 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {

    std::cout << "Creating the weapon!" << std::endl;
}

Weapon::~Weapon(void) {

    std::cout << "Destroying the weapon!" << std::endl;
}

std::string Weapon::getType(void) const{

    return (_type);
}

void    Weapon::setType(std::string type){

    _type = type;
}
