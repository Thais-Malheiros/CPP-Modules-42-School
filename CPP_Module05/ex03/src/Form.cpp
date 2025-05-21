/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:28:45 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/11 13:45:35 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

Form::Form(void) :
	_FormName("default"), _IsSigned(false), _SignGrade(150), _ExecGrade(150) {
		std::cout << "\033[38;5;117mForm " << getName();
		std::cout << " constructor called.\033[0m" << std::endl;
}

Form::Form(const std::string name, const int sign, const int exec) :
	_FormName(name), _IsSigned(false), _SignGrade(sign), _ExecGrade(exec) {
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	std::cout << "\033[38;5;117mAForm " << getName();
	std::cout << " constructor called.\033[0m" << std::endl;
}

Form::Form(const Form &other) :
	_FormName(other._FormName), _IsSigned(other._IsSigned), _SignGrade(other._SignGrade),
		_ExecGrade(other._ExecGrade) {
	*this = other;
	std::cout << "\033[38;5;117mAForm " << getName();
	std::cout << " copy constructor called.\033[0m" << std::endl;
}

Form::~Form(void) {
	std::cout << "\033[38;5;117mAForm " << getName();
	std::cout << " destructor called.\033[0m" << std::endl;
}

Form& Form::operator=(const Form &other) {
	std::cout << "\033[38;5;117mOperator overload called.\033[0m" << std::endl;
	if (this != &other)
		return (*this);
	return (*this);
}

std::string Form::getName(void) const {
	return (_FormName);
}

bool Form::getSigned(void) const {
	return (_IsSigned);
}

int Form::getSignGrade(void) const {
	return (_SignGrade);
}

int Form::getExecGrade(void) const {
	return (_ExecGrade);
}

void Form::setIsSigned(void) {
	_IsSigned = true;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (this->getSignGrade() < bureaucrat.getGrade()) {
		std::cout << "Bureaucrat " << bureaucrat.getName();
		std::cout << " couldn't sign " << this->getName();
		std::cout << ". It's grade is lower than form sign grade" << std::endl;
		throw GradeTooLowException();
	}
	std::cout << "Bureaucrat " << bureaucrat.getName();
	std::cout << " signed " << this->getName() << std::endl;
	this->setIsSigned();
}

int Form::execute(Bureaucrat const &executor) const {
	if (this->getSigned() == false) {
		std::cout << this->getName() << " is not signed." << std::endl;
		return (1);
	}
	else {
		if (executor.getGrade() > this->getExecGrade()) {
				std::cout << "\033[38;5;117m"  << executor.getName();
				std::cout << " couldn't execute " << this->getName();
				std::cout << "\033[0m" << std::endl;
				throw GradeTooLowException();
		}
		std::cout << "\033[38;5;117m" << executor.getName() << " executed ";
		std::cout << this->getName() << "\033[0m" << std::endl;
		action();
		return (0);
	}
}

void Form::action(void) const {
	std::cout << "Preparing to action..." << std::endl;
}

const char *Form::GradeTooLowException::what(void) const throw () {
	return ("\033[1;31mException form: grade too low\033[0m");
}

const char *Form::GradeTooHighException::what(void) const throw () {
	return ("\033[1;31mException form: grade too high\033[0m");
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Form name: " << form.getName() << "\n";
	if (form.getSigned() == true)
		os << "Form is signed: true" << "\n";
	if (form.getSigned() == false)
		os << "Form is signed: false" << "\n";
	os << "Form sign grade: " << form.getSignGrade() << "\n";
	os << "Form execution grade: " << form.getExecGrade() << std::endl;
	return (os);
}
