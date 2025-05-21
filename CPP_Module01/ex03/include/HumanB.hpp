/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:52:16 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 13:57:37 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB {

private:
    std::string _name;
    Weapon      *_weapon;

public:
    HumanB(std::string name);
    ~HumanB(void);

    void    setWeapon(Weapon& weaponOfChoice);
    void    attack(void);
};

#endif
