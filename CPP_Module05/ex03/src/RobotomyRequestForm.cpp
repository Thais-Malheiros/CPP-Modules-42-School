/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:26:05 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 11:17:28 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robotomy", 72, 45), _target("John Doe") {
	std::cout << "\033[38;5;250mRobotomy request form to " << getTarget();
	std::cout << " constructor called.\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form(target, 72, 45), _target(target) {
	std::cout << "\033[38;5;250mRobotomy request form to " << getTarget();
	std::cout << " constructor called.\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other) {
	*this = other;
	std::cout << "\033[38;5;250mRobotomy request form to " << getTarget();
	std::cout << " copy constructor called.\033[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "\033[38;5;250mRobotomy request form to " << getTarget();
	std::cout << " destructor called.\033[0m" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other) {
		this->_target = other.getTarget();
		std::cout << "\033[38;5;250mOperator overload called.\033[0m" << std::endl;
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const {
	return (_target);
}

void RobotomyRequestForm::action(void) const {
	std::cout << "Drilling noise... *Vrrrrr* *Bzzzzt* *Whirr*\n";

	srand(time(0));

	if ((rand()) % 2 == 0)
		std::cout << getTarget() << " was successfully robotomized. " << std::endl;
	else
		std::cout << getTarget() << "'s robotomization failed." << std::endl;
}
