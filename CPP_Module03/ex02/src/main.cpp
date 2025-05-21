/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:45:35 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/06 16:41:23 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

int	main(void)
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "Let's make some tests." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	std::cout << "First, let's check the constructors.\n" << std::endl;
	FragTrap	frag;
	FragTrap	trap("Mary");
	FragTrap	strap(frag);

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "It's possible to assign one object to another." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	strap = trap;

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Now let's check the class methods" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	strap.attack("enemy");
	strap.beRepaired(1);
	strap.takeDamage(3);
	strap.takeDamage(200);
	strap.attack("enemy");
	strap.highFivesGuys();
	return (0);
}
