/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:45:35 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/06 15:51:47 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "Let's make some tests." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	std::cout << "First, let's check the constructors.\n" << std::endl;
	ClapTrap	clap;
	ClapTrap	trap("John");
	ClapTrap	ctrap(clap);

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "It's possible to assign one object to another." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	ctrap = trap;

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Now let's check the class methods" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	clap.attack("enemy");
	clap.beRepaired(1);
	clap.takeDamage(3);
	clap.takeDamage(10);
	clap.attack("enemy");
	clap.beRepaired(1);
	return (0);
}