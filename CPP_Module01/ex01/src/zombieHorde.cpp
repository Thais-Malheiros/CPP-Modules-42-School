/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:28:29 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 11:38:03 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

    if (N < 1)
        return (0);
    Zombie* horde = new Zombie[N];
    for (int idx = 0; idx < N; idx++) {
        horde[idx].setName(name);
        std::cout << "Zombie " << horde[idx].getName() << " was created." << std::endl;
    }
    return (horde);
}
