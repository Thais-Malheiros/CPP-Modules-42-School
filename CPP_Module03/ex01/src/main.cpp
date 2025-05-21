/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:45:35 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/06 16:02:55 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int	main(void)
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "Let's make some tests." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	std::cout << "First, let's check the constructors.\n" << std::endl;
	ScavTrap	scav;
	ScavTrap	trap("John");
	ScavTrap	strap(scav);

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "It's possible to assign one object to another." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	strap = trap;

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Now let's check the class methods" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	trap.attack("enemy");
	trap.beRepaired(1);
	trap.guardGate();
	trap.takeDamage(3);
	trap.takeDamage(200);
	trap.guardGate();
	trap.attack("enemy");
	return (0);
}
