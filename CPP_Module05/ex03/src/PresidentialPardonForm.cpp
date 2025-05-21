/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:40:09 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 10:53:44 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("John Doe", 25, 5), _target("John Doe") {
	std::cout << "\033[38;5;229mPresidential pardon form to " << getTarget();
	std::cout << " constructor called.\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form(target, 25, 5), _target(target) {
	std::cout << "\033[38;5;229mPresidential pardon form to " << getTarget();
	std::cout << " constructor called.\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other) {
	*this = other;
	std::cout << "\033[38;5;229mPresidential pardon form to " << getTarget();
	std::cout << " copy constructor called.\033[0m" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "\033[38;5;229mPresidential pardon form to " << getTarget();
	std::cout << " destructor called.\033[0m" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	std::cout << "\033[38;5;229mOperator overload called.\033[0m" << std::endl;
	if (this != &other) {
		this->_target = other.getTarget();
	}
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const {
	return (_target);
}

void PresidentialPardonForm::action(void) const {
	std::cout << getTarget() << " was pardoned by Zaphod Beeblebrox." << std::endl;
}
