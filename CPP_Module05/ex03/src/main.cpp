/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:10:33 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/11 16:21:59 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int	main(void) {

std::cout << "*********************** TESTS ***********************\n";
std::cout << "Case 1: Invalid name form\n";
std::cout << "*****************************************************\n";

	Bureaucrat a("Blop", 150);
	std::cout << a << std::endl;
	Intern intern;

	try {
		Form *b = intern.makeForm("invalid", "James");
		std::cout << (*b) << std::endl;
		a.signForm(*b);
		a.executeForm(*b);
		delete (b);
	}
	catch(std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

// std::cout << "*********************** TESTS ***********************\n";
// std::cout << "Case 2: Creating a PresidentialPardonForm\n";
// std::cout << "*****************************************************\n";

// 	Bureaucrat a("Blop", 1);
// 	std::cout << a << std::endl;
// 	Intern intern;
// 	try {
// 		Form *b = intern.makeForm("PresidentialPardonForm", "James");
// 		std::cout << (*b) << std::endl;
// 		a.signForm(*b);
// 		a.executeForm(*b);
// 		delete (b);
// 	}
// 	catch(std::exception &exception) {
// 		std::cout << exception.what() << std::endl;
// 	}

// std::cout << "*********************** TESTS ***********************\n";
// std::cout << "Case 3: Creating a RobotomyRequestForm\n";
// std::cout << "*****************************************************\n";

// 	Bureaucrat a("Blop", 1);
// 	std::cout << a << std::endl;
// 	Intern intern;

// 	try {
// 		Form *b = intern.makeForm("RobotomyRequestForm", "James");
// 		std::cout << (*b) << std::endl;
// 		a.signForm(*b);
// 		a.executeForm(*b);
// 		delete (b);
// 	}
// 	catch(std::exception &exception) {
// 		std::cout << exception.what() << std::endl;
// 	}

// std::cout << "*********************** TESTS ***********************\n";
// std::cout << "Case 4: Creating a ShrubberyCreationForm\n";
// std::cout << "*****************************************************\n";

// 	Bureaucrat a("Blop", 1);
// 	std::cout << a << std::endl;
// 	Intern intern;

// 	try {
// 		Form *b = intern.makeForm("ShrubberyCreationForm", "James");
// 		std::cout << (*b) << std::endl;
// 		a.signForm(*b);
// 		a.executeForm(*b);
// 		delete (b);
// 	}
// 	catch(std::exception &exception) {
// 		std::cout << exception.what() << std::endl;
// 	}

// std::cout << "*********************** TESTS ***********************\n";
// std::cout << "Case 5: PDF's test\n";
// std::cout << "*****************************************************\n";

// 	try {

// 		Intern someRandomIntern;
// 		Form* rrf;
// 		rrf = someRandomIntern.makeForm("robotomy", "Bender");
// 		delete (rrf);
// 	}
// 	catch(std::exception &exception) {
// 		std::cout << exception.what() << std::endl;
// 	}
}
