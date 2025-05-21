/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:33:53 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:27:10 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cat.hpp"
#include "../include/dog.hpp"
#include "../include/wrongAnimal.hpp"
#include "../include/wrongCat.hpp"

int	main(void)
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "Let's make some tests. First, let's check\n";
	std::cout << "the Animal class constructors." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	Animal	blip;
	Animal	blup("Zebra");
	Animal	blop(blip);

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "It's possible to assign one object to another." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	Animal	blep = blop;

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Now let's check the Animal class methods" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	std::cout << "Animal type is: " << blep.getType() << std::endl;
	blep.makeSound();

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Now let's check the Cat and Dog constructors." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	Cat	Lucy;
	Dog	Snoopy;
	Cat Woodstock(Lucy);
	Dog Linus(Snoopy);

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "It's possible to assign objects in here too" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	Cat	Sally = Woodstock;
	Dog	Charlie = Linus;

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Derived classes can call base class methods" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	std::cout << "Type of i is: " << Lucy.getType() << std::endl;
	std::cout << "Type of i is: " << Snoopy.getType() << std::endl;
	Woodstock.makeSound();
	Linus.makeSound();

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Pointers: a base class object can point to a\n";
	std::cout << "derived class and access it's methods." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	i = new Cat();
	const Animal*	j = new Dog();

	std::cout << "Type of i is: " << i->getType() << " " << std::endl;
	std::cout << "Type of j is: " << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Now let's check the wrong way to do it" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	const WrongAnimal*	wrongMeta = new WrongAnimal();
	const WrongAnimal*	k = new WrongCat();

	std::cout << "Type of k is: " << k->getType() << " " << std::endl;
	k->makeSound();

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Signinf off now, bye bye!" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	delete(meta);
	delete(i);
	delete(j);
	delete(wrongMeta);
	delete(k);
	return (0);
}