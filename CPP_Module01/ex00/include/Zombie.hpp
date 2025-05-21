/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:08:10 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/16 14:29:01 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class   Zombie {

private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie(void);

    void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
