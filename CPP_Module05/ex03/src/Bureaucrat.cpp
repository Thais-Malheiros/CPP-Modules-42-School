/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:24:09 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 10:34:08 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) {
	std::cout << "\033[38;5;218mBureaucrat " << getName();
	std::cout << " constructor called.\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	setGrade(grade);
	std::cout << "\033[38;5;218mBureaucrat " << getName();
	std::cout << " constructor called.\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
	std::cout << "\033[38;5;218mBureaucrat " << getName();
	std::cout << " copy constructor called.\033[0m" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "\033[38;5;218mBureaucrat " << getName();
	std::cout << " destructor called.\033[0m" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
	std::cout << "\033[38;5;218mOperator overload called.\033[0m" << std::endl;
	if (this != &other) {
		this->_grade = other.getGrade();
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const {
	return (_name);
}

int Bureaucrat::getGrade(void) const {
	return (_grade);
}

void Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

void Bureaucrat::incrementGrade(const int inc) {
	if ((getGrade() - inc) < 1) {
		std::cout << getName() << "'s increment excedes maximum grade." << std::endl;
		throw GradeTooHighException();
	}
	std::cout << getName() << "'s grade incremented to " << (getGrade() -inc) << std::endl;
	return (setGrade(getGrade() - inc));
}

void Bureaucrat::decrementGrade(const int dec) {
	if ((getGrade() + dec) > 150) {
		std::cout << getName() << "'s decrement excedes minimum grade." << std::endl;
		throw GradeTooLowException();
	}
	std::cout << getName() << "'s grade decremented to " << (getGrade() -dec) << std::endl;
	return (setGrade(getGrade() + dec));
}

void Bureaucrat::signForm(Form &form) {
	form.beSigned(*this);
}

void Bureaucrat::executeForm(Form const &form) {
	form.execute(*this);
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw () {
	return ("\033[1;31mException bureaucrat: grade too low\033[0m");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw () {
	return ("\033[1;31mException bureaucrat: grade too high\033[0m");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& person) {
	os << person.getName() << " is a bureaucrat and it's grade is ";
	std::cout  << person.getGrade() << std::endl;
	return (os);
}
