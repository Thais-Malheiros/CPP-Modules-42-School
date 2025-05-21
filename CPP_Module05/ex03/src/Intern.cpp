/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:32:28 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/11 16:27:19 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern(void) {
	std::cout << "\033[38;5;183mIntern constructor called.\033[0m" << std::endl;
}

Intern::Intern(const Intern &other) {
	*this = other;
	std::cout << "\033[38;5;183mIntern copy constructor called.\033[0m" << std::endl;
}

Intern::~Intern(void) {
	std::cout << "\033[38;5;183mIntern destructor called.\033[0m" << std::endl;
}

Intern& Intern::operator=(const Intern &other) {
	std::cout << "\033[38;5;183mOperator overload called.\033[0m" << std::endl;
	if (this != &other)
		return (*this);
	return (*this);
}

static Form *(makePresident(const std::string target)) {
	return (new PresidentialPardonForm(target));
}

static Form *(makeRobot(const std::string target)) {
	return (new RobotomyRequestForm(target));
}

static Form *(makeShrubbery(const std::string target)) {
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(const std::string formToCreate, const std::string targetToForm) {
	Form *(*allForms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creationl"};
	for (int idx = 0; idx < 3; idx++) {
		if (!formToCreate.compare(forms[idx])) {
			std::cout << "Intern creates " << forms[idx] << std::endl;
			return (allForms[idx](targetToForm));
		}
	}
	throw invalidArgException();
	return (NULL);
}

const char *Intern::invalidArgException::what(void) const throw () {
	return ("\033[1;31mInvalid target\033[0m");
}
