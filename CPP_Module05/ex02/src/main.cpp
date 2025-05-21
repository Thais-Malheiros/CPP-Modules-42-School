/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:10:33 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 12:34:37 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Bureaucrat.hpp"

int	main(void) {
	// std::cout << "*********************** TESTS ***********************\n";
	// std::cout << "Case 1: One bureaucrat who cannot sign anything\n";
	// std::cout << "*****************************************************\n";

	// try {
	// 	Bureaucrat mary("Mary", 150);
	// 	PresidentialPardonForm pardon("Just another form");
	// 	AForm *obj1 = &pardon;
	// 	RobotomyRequestForm robot("Robot");
	// 	AForm *obj2 = &robot;
	// 	ShrubberyCreationForm shrubbery("Shrubbery");
	// 	AForm *obj3 = &shrubbery;
	// 	mary.signForm(pardon);
	// 	mary.signForm(robot);
	// 	mary.signForm(shrubbery);
	// 	obj1->execute(mary);
	// 	obj2->execute(mary);
	// 	obj3->execute(mary);
	// }
	// catch(std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// std::cout << "*********************** TESTS ***********************\n";
	// std::cout << "Case 2: A form that can be signed, but not executed \n";
	// std::cout << "*****************************************************\n";

	// try {
	// 	Bureaucrat mary("Mary", 20);
	// 	std::cout << mary << std::endl;
	// 	PresidentialPardonForm pardon("Just another form");
	// 	std::cout << pardon << std::endl;
	// 	AForm *obj1 = &pardon;
	// 	mary.signForm(pardon);
	// 	mary.executeForm(pardon);
	// 	obj1->execute(mary);
	// }
	// catch(std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }
	// return (0);

	// std::cout << "*********************** TESTS ***********************\n";
	// std::cout << "Case 3: A bureaucrat who can sign, but not execute \n";
	// std::cout << "*****************************************************\n";

	// try {
	// 	Bureaucrat john("John", 70);
	// 	std::cout << john << std::endl;
	// 	RobotomyRequestForm robot("Robot");
	// 	std:: cout << robot << std::endl;
	// 	john.signForm(robot);
	// 	john.executeForm(robot);
	// }
	// catch(std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }
	// return (0);

	std::cout << "*********************** TESTS ***********************\n";
	std::cout << "Case 4: A bureaucrat who can sign and execute \n";
	std::cout << "*****************************************************\n";

	try {
		Bureaucrat peter("Peter", 1);
		std::cout << peter << std::endl;
		ShrubberyCreationForm shrubbery("garden");
		std:: cout << shrubbery << std::endl;
		RobotomyRequestForm robot("Robot");
		std:: cout << robot << std::endl;
		PresidentialPardonForm pardon("Jose");
		std::cout << pardon << std::endl;
		peter.signForm(shrubbery);
		peter.signForm(robot);
		peter.signForm(pardon);
		peter.executeForm(shrubbery);
		peter.executeForm(robot);
		peter.executeForm(pardon);
	}
	catch(std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	return (0);
}
