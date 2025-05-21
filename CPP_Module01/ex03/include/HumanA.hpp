/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:47:37 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 13:37:56 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA {

private:
    std::string _name;
    Weapon&     _weapon;

public:
    HumanA(std::string name, Weapon& weaponOfChoice);
    ~HumanA(void);

    void    attack(void);
};

#endif
