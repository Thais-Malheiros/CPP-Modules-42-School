/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:33:53 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 12:46:26 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cat.hpp"
#include "../include/dog.hpp"

int	main(void)
{
	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Since AAnimal is now an abstract class, ";
	std::cout << "we cannot instatiate it anymore." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	// AAnimal	test;

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Let's not forget the subject tests." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	const AAnimal*	j = new Dog();
	const AAnimal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	delete (j);
	delete (i);

	Cat*	a = new Cat();
	AAnimal	*b = a;
	delete (b);

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Signinf off now, bye bye!" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;

	return (0);
}
