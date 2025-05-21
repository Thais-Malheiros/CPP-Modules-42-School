/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:33:53 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 12:09:50 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cat.hpp"
#include "../include/dog.hpp"

int	main(void)
{
	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "We now have a new Brain class." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	Brain	brain1;
	for (int idx = 0; idx < 100; idx++)
		std::cout << brain1.getIdeas(idx);
	std::cout << std::endl;
	Brain	brain2(brain1);
	Brain	brain3("new idea");
	for (int idx = 0; idx < 100; idx++)
		std::cout << brain3.getIdeas(idx);
	std::cout << std::endl;

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "It's possible to assign objects in here too" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	brain3 = brain1;

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Cats and Dogs have brains, yow know?" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	Cat	Mimi;
	Dog Toto;

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Let's create a bunch of cats and dogs." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;

	Animal*	array[4];

	for (int idx = 0; idx < 2; idx++)
		array[idx] = new Cat();
	for (int idx = 2; idx <= 3; idx++)
		array[idx] = new Dog();

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Now let's delete all the cats and dogs." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;

			for (int idx = 0; idx < 4; idx++)
				delete (array[idx]);

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Finally, let's test virtual destructor." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;

	Cat	*a = new Cat();
	Animal	*b = a;
	delete (b);

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Let's not forget the subject tests." << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete (j); // should not create a leak
	delete (i);

	std::cout << "\n-----------------------------------------------" << std::endl;
	std::cout << "Signinf off now, bye bye!" << std::endl;
	std::cout << "-----------------------------------------------\n" << std::endl;

	return (0);
}
