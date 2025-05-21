/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:36:27 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/17 11:42:35 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Functions.hpp"

Base	*generate(void) {
	int		random = std::rand() % 3;
	Base	*instances[3] = {new A(), new B(), new C()};
	return (instances[random]);
}

void	identify(Base* ptr) {
	if (dynamic_cast<A*>(ptr))
		std::cout << "Object type: A" << std::endl;
	else if (dynamic_cast<B*>(ptr))
		std::cout << "Object type: B" << std::endl;
	else if (dynamic_cast<C*>(ptr))
		std::cout << "Object type: C" << std::endl;
	else
		std::cout << "Unknown object" << std::endl;
}

void	identify(Base& ptr) {
	try {
		(void)dynamic_cast<A&>(ptr);
		std::cout << "Object type: A" << std::endl;
		return ;
	}
	catch (std::exception& e) {}
	try {
		(void)dynamic_cast<B&>(ptr);
		std::cout << "Object type: B" << std::endl;
		return ;
	}
	catch (std::exception& e) {}
	try {
		(void)dynamic_cast<C&>(ptr);
		std::cout << "Object type: C" << std::endl;
		return ;
	}
	catch (std::exception& e) {}
}
