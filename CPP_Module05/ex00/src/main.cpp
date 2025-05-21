/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:10:33 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 12:15:04 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main(void) {
	try {
		Bureaucrat	generic;
		std::cout << generic << std::endl;
		Bureaucrat	john("John", 100);
		std::cout << john << std::endl;
		Bureaucrat	mary("Mary", 150);
		std::cout << mary << std::endl;

		john.decrementGrade(15);
		john.incrementGrade(100);
		mary.incrementGrade(150);
	}
	catch(std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	return (0);
}
