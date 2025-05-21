/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:45:59 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 11:47:10 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class   Weapon {

private:
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon(void);

    void    setType(std::string type);
    std::string getType(void)const;
};

#endif
