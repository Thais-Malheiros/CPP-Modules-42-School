/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:18:35 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/16 14:29:58 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    randomChump("Fred");
    Zombie* zombie = newZombie("Bob");
    zombie->announce();
    delete (zombie);
    return (0);
}
