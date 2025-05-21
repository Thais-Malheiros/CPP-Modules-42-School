/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:28:45 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 10:37:25 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm(void) :
	_FormName("default"), _IsSigned(false), _SignGrade(150), _ExecGrade(150) {
		std::cout << "\033[38;5;117mAForm " << getName();
		std::cout << " constructor called.\033[0m" << std::endl;
}

AForm::AForm(const std::string name, const int sign, const int exec) :
	_FormName(name), _IsSigned(false), _SignGrade(sign), _ExecGrade(exec) {
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	std::cout << "\033[38;5;117mAForm " << getName();
	std::cout << " constructor called.\033[0m" << std::endl;
}

AForm::AForm(const AForm &other) :
	_FormName(other._FormName), _IsSigned(other._IsSigned), _SignGrade(other._SignGrade),
		_ExecGrade(other._ExecGrade) {
	*this = other;
	std::cout << "\033[38;5;117mAForm " << getName();
	std::cout << " copy constructor called.\033[0m" << std::endl;
}

AForm::~AForm(void) {
	std::cout << "\033[38;5;117mAForm " << getName();
	std::cout << " destructor called.\033[0m" << std::endl;
}

AForm& AForm::operator=(const AForm &other) {
	std::cout << "\033[38;5;117mOperator overload called.\033[0m" << std::endl;
	if (this != &other)
		return (*this);
	return (*this);
}

std::string AForm::getName(void) const {
	return (_FormName);
}

bool AForm::getSigned(void) const {
	return (_IsSigned);
}

int AForm::getSignGrade(void) const {
	return (_SignGrade);
}

int AForm::getExecGrade(void) const {
	return (_ExecGrade);
}

void AForm::setIsSigned(void) {
	_IsSigned = true;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
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

int AForm::execute(Bureaucrat const &executor) const {
	if (this->getSigned() == false) {
		std::cout << this->getName() << " is not signed." << std::endl;
		return (1);
	}
	else {
		if (executor.getGrade() > this->getExecGrade()) {
				std::cout << "\033[38;5;117m" << executor.getName();
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

const char *AForm::GradeTooLowException::what(void) const throw () {
	return ("\033[1;31mException form: grade too low\033[0m");
}

const char *AForm::GradeTooHighException::what(void) const throw () {
	return ("\033[1;31mException form: grade too high\033[0m");
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
	os << "AForm name: " << form.getName() << "\n";
	if (form.getSigned() == true)
		os << "AForm is signed: true" << "\n";
	if (form.getSigned() == false)
		os << "AForm is signed: false" << "\n";
	os << "AForm sign grade: " << form.getSignGrade() << "\n";
	os << "AForm execution grade: " << form.getExecGrade() << std::endl;
	return (os);
}
