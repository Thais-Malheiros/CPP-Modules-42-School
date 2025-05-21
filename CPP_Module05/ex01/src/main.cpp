/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:10:33 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 12:21:52 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

int	main(void) {

	// std::cout << "*********************** TESTS ***********************\n";
	// std::cout << "Case 1: form with sign grade too high\n";
	// std::cout << "*****************************************************\n";
	// try {
	// 	Form	formA("A", 0, 120);
	// 	std::cout << formA << std::endl;
	// }
	// catch(std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// std::cout << "*********************** TESTS ***********************\n";
	// std::cout << "Case 2: form with sign grade too low\n";
	// std::cout << "*****************************************************\n";
	// try {
	// 	Form	formB("B", 151, 120);
	// 	std::cout << formB << std::endl;
	// }
	// catch(std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// std::cout << "*********************** TESTS ***********************\n";
	// std::cout << "Case 3: bureaucrat with grade lower than form grade\n";
	// std::cout << "*****************************************************\n";
	// try {
	// 	Bureaucrat	mary("Mary", 50);
	// 	std::cout << mary << std::endl;

	// 	Form	form("generic", 40, 120);
	// 	std::cout << form << std::endl;

	// 	mary.signForm(form);
	// }
	// catch(std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// std::cout << "*********************** TESTS ***********************\n";
	// std::cout << "Case 4: bureaucrat with grade lower than form grade\n";
	// std::cout << "*****************************************************\n";
	// try {
	// 	Bureaucrat	john("John", 60);
	// 	std::cout << john << std::endl;

	// 	Form	form("generic", 50, 120);
	// 	std::cout << form << std::endl;

	// 	form.beSigned(john);
	// }
	// catch(std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }
	// return (0);

	std::cout << "*********************** TESTS ***********************\n";
	std::cout << "Case 5: bureaucrat with grade higher than form grade\n";
	std::cout << "*****************************************************\n";
	try {
		Bureaucrat	john("John", 10);
		std::cout << john << std::endl;

		Form	form("generic", 50, 120);
		std::cout << form << std::endl;

		john.signForm(form);
	}
	catch(std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	return (0);
}
