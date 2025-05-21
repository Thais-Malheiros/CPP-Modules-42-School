/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:26:12 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 11:39:36 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    int N = 5;

    std::cout << "Zombie horde being created in 3... 2... 1..." << std::endl;
    Zombie* horde = zombieHorde(N, "Fred");
    if (horde) {
        for (int idx = 0; idx < N; idx++)
            horde[idx].announce();
        delete [] horde;
    }
    else
        std::cout << "Give me some zombieeeessss!" << std::endl;
    return (0);
}
