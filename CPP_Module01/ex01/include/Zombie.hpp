/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:26:32 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 11:34:57 by tmalheir         ###   ########.fr       */
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
    Zombie(void);
    ~Zombie(void);

    void    announce(void);
    void    setName(std::string name);
    std::string getName(void)const;
};

Zombie* zombieHorde(int N, std::string name);

#endif
