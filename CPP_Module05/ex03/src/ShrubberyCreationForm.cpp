/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:39:30 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/10 12:45:47 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubbery", 145, 137), _target("home") {
	std::cout << "\033[38;5;120mShrubbery creation form at " << getTarget();
	std::cout << " constructor called.\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("shrubbery", 145, 137), _target(target) {
	std::cout << "\033[38;5;120mShrubbery creation form at " << getTarget();
	std::cout << " constructor called.\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) {
	*this = other;
	std::cout << "\033[38;5;120mShrubbery creation form at " << getTarget();
	std::cout << " copy constructor called.\033[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "\033[38;5;120mShrubbery creation form at " << getTarget();
	std::cout << " destructor called.\033[0m" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	if (this != &other) {
		this->_target = other.getTarget();
		std::cout << "Operator overload called." << std::endl;
	}
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const {
	return (_target);
}

void ShrubberyCreationForm::action(void) const {
	std::ofstream	file((getTarget() + "_shrubbery").c_str());

	if (!file) {
		std::cerr << "Error opening file." << std::endl;
		return ;
	}

	file << "                                                                                      ..::" << std::endl;
	file << "                                                            ----        ....::MM  --..++mm++" << std::endl;
	file << "                                                    ..--------++--..--::mm++++++++mmmm::MM@@ " << std::endl;
	file << "                                                  ::++::++mmMM--::++mmmmmm++++MM@@@@mmmmmmMMmm++::" << std::endl;
	file << "                                                ::++++mmMMmm++::::MM::::::--::mmmmMMMMmm++mm++mm++" << std::endl;
	file << "                                      --::--::--mm::++::::::mmMMMMMMmmmmMMMMmmMMMMmmMMmmMMMM@@mmmmmm" << std::endl;
	file << "                                      ::MMmm::mmmmMMMM++@@######@@mm::mmMMmm++####@@mmmmMMmm@@@@@@MMMM" << std::endl;
	file << "                                    ..::mmMM++MM@@mmMM@@MMMM##@@MM++++::++++++@@@@mmmmmm@@MM@@@@MM@@++MM" << std::endl;
	file << "                                  ..mm++MM++mm@@####@@mm@@@@MM++++::@@MM++MM@@##MMmm@@@@##@@##@@MM@@mmMM++mm" << std::endl;
	file << "                                  ::++MMMM@@##@@++@@##@@######@@mm##MM@@@@@@##@@##@@######@@MM##@@MMmmMMMM" << std::endl;
	file << "                                ::mm@@MMMM####mm@@##@@@@@@##@@@@####mmMM@@##--mm++####@@####@@@@mmMM@@ " << std::endl;
	file << "                              mmMM@@MMMMmm@@mmMMmm@@##@@########@@##@@MMMM##@@@@--##@@######mm@@@@##mm.." << std::endl;
	file << "                              ..++++::++MMMMMM@@MM##@@####::MM##MM@@MM@@@@@@@@@@####@@MMMM########@@mm" << std::endl;
	file << "                              ::++::mmmmmm@@####MM@@@@@@MMMM++####++MM@@mm@@@@@@##@@MM########MM##@@MM" << std::endl;
	file << "                            ++::++++MM@@++@@@@mm@@##mm##mmmm##mm@@++mm@@##mm@@##########@@####@@######" << std::endl;
	file << "                            --::mm@@++@@@@##MM######@@##mm@@mmmm##@@##@@##@@MMMM@@@@MM@@mm++@@@@##@@@@@@@@::" << std::endl;
	file << "                              ::++mmmm@@MM@@@@++::@@mmmm@@mm##MMMM##@@mmMMMMmmMMMM@@MM@@##@@########@@@@@@mm::" << std::endl;
	file << "                              mm@@@@##@@##@@##mm##MMMM++MMMM::##@@@@MM@@MM@@MMMMMM##@@######mm##MMMM####MM##MM" << std::endl;
	file << "                            ++::@@mm####MMMM@@####MM@@++MM@@mmmm##--mmMM++::--MM####mm##@@##MM####@@@@MM@@##MM++" << std::endl;
	file << "                            ::@@####MM##@@@@##MMMM@@mm##mmMMMM::++mm##MMmmmmMM@@MM@@mm##..MMMMMM@@MMMM@@@@mm@@.." << std::endl;
	file << "                          ::mm++@@####@@####mm@@##MM::mm##MM##mm::++++MMmmmm++##@@@@@@@@@@MM@@MM##@@@@##++##@@MM" << std::endl;
	file << "                        --mm::::MMMM##mm######@@@@@@::mm++##::++mmMM@@@@@@MM@@MM########MM##@@mm@@mmMM##MM@@@@mm--" << std::endl;
	file << "                          ::++MM@@mm######mm@@MMmmMMMM@@@@@@mmmm######@@mm@@MM######@@######MM##@@##@@##mmMM##MM##.." << std::endl;
	file << "                          ++MM@@@@MM##@@--++##MMMM@@@@MM@@@@::MM######MM####MMmm##MM@@##########MM##@@MMMM@@MM@@mm++--" << std::endl;
	file << "                        ..::::MM@@@@@@##MM##MMMM##::@@MM@@mmmmMM##MM@@MM@@MMMM@@@@MMmmMMmmMMmm@@##@@MM@@mm@@MMmmMMMM::" << std::endl;
	file << "                        ::::++MM@@MM####MM##MMMM##mmMM++MM@@++mm++mm::MM@@mmMM@@@@@@MMMM##@@@@MM@@@@@@MMMM####@@@@##++" << std::endl;
	file << "                    ++::mm++++MM++mmmm::@@##@@####MM++##@@##mm++##mm####mmmmMM@@@@##@@@@MM@@##########@@@@######MM@@" << std::endl;
	file << "                  --++::++mmmm++MMmm::mm::MM######mm@@####--mm####@@####@@####@@########@@####@@####MM####@@@@MM..@@mm" << std::endl;
	file << "                --mm++MM++++++mm++MMMM@@##@@MM@@::##MM##mm##mmMM@@##MM@@##@@########@@########@@MM##@@MM####mmMM##@@MMMM.." << std::endl;
	file << "                ..++++mmmm::--MM++MMMM@@##@@##MMmm--@@MMmmMMmmMMMM--##@@######@@####@@####mmMMmm####@@@@@@MMmmmmmm##@@MM.." << std::endl;
	file << "                --MM@@mm++++@@::@@MM@@++mmmm@@MM@@MM++::mmmm++mm@@##############MMMM##@@##MM@@######@@##@@##mmmmMMMM@@MM++" << std::endl;
	file << "                ::mm@@::--::++::mmMM@@##@@####@@mm++++++++mm++MMMM--####MM####MM##@@@@##################MM@@MMMMMMmmMMMM++" << std::endl;
	file << "                --@@++mm--mmMM####MM++MM@@####--@@mm++@@@@MMmmmm++MM##@@@@##@@mm@@@@####mm##############@@##@@MM##++##mmMM--" << std::endl;
	file << "                ..++MM++--@@++mmmm++++::@@@@##----mm::MM@@++MMMM@@@@mm@@####@@@@@@@@####MMmm@@##########MM##@@MM@@MMMM@@##--" << std::endl;
	file << "                ..++@@::::MM@@####@@@@@@####mm++::++mm++MMmm@@##mm@@@@mmMMMMMM########mm##@@@@##@@####@@@@##@@##@@####MM##" << std::endl;
	file << "                  ++@@::MMMM@@@@MM++::++mm@@MM++++MMMM@@####@@##mm######MM##MM##@@@@@@mmMMmm##########################@@@@" << std::endl;
	file << "                  ::@@MMMMmm##@@mm++++@@@@@@MM++mm++##MMmm####@@@@@@mmMMmm@@MMMM@@@@mm--@@mmMM@@@@mmMM@@MM############mm" << std::endl;
	file << "                      ++++MMMM@@##MMMM@@####++mmmm##@@@@MM@@MMMMMM##mm@@##@@mm@@mm@@####@@MMMM@@++mm##@@########@@##----" << std::endl;
	file << "                      ++++::mmMMmm--..####++++@@MM@@@@MMMM##@@@@@@##########@@##@@@@@@@@@@mmMMMMMM@@MMMMMM@@@@@@@@##" << std::endl;
	file << "                    ..++mm++##MMMM@@MMmmmm++++MMmmMMMM####@@@@@@@@MM@@##@@mm@@############@@##@@MMMMMM##MMMM@@######@@.." << std::endl;
	file << "                  ..MM@@++mm++++mmMMMMMMMM++mm++MM@@MM##@@MM@@MM##MMmm##@@##@@####@@####@@####@@@@MM@@##@@@@MMMMmmMMMM" << std::endl;
	file << "                  ::@@mmMMMM::mm@@@@mm@@++@@##++++@@@@@@@@@@MM@@MM########++################@@@@@@##@@@@MMMMMM--MM" << std::endl;
	file << "                    ++@@@@MM######@@--MMMMmmMM@@MM##MMMMmmmm@@##@@mm######MM######@@##@@####@@mmMM--  mm######@@" << std::endl;
	file << "                    ::++MM@@##MM@@++--..@@mmMMMM@@##::::--@@####MMmm##@@@@##@@@@##  @@##@@mm++--##::  MM##@@##@@@@" << std::endl;
	file << "                        mmmm@@mm##mmMM##++++MM########::@@MM####mmmm@@@@##MM######::  --  ----..mmMMmm##@@@@##" << std::endl;
	file << "                        mm@@MMmm@@MM@@##########@@######MM@@++####mm####@@MM@@  @@++--..--  ++@@##MM    --.." << std::endl;
	file << "                      ::--@@##mmMM######@@@@mmMM@@@@##@@##MM##MM########@@####mm##@@@@  ##MMmm  ::--" << std::endl;
	file << "                              ::@@##MMMM::mm@@@@##########  ##@@##########mm@@@@" << std::endl;
	file << "                                MM::MM  ..MMMM######@@mmMM  --mmMMmm####@@::::mm" << std::endl;
	file << "                                      --::@@MM@@##@@##--  ..++  ::mm####++...." << std::endl;
	file << "                                              ::@@##--++            @@##::" << std::endl;
	file << "                                            ++@@..                  MM##::" << std::endl;
	file << "                                            ..                    --@@##::" << std::endl;
	file << "                                                                    MM@@MM" << std::endl;
	file << "                                                                    @@@@MM" << std::endl;
	file << "                                                                    MM##++" << std::endl;
	file << "                                                                    mm@@++" << std::endl;
	file << "                                                                    MM@@mm" << std::endl;
	file << "                                                                    MMMMMM" << std::endl;
	file << "                                                                    MM@@@@" << std::endl;
	file << "                                                                    MMMM##" << std::endl;
	file << "                                                                    MMMM##" << std::endl;
	file << "                                                                    MM@@##" << std::endl;
	file << "                                                                    @@@@##" << std::endl;
	file << "                                                                    MM@@@@" << std::endl;
	file << "                                                                    @@@@##" << std::endl;
	file << "                                                                  ..##@@@@" << std::endl;
	file << "                                                                mmmm@@MMmmMM" << std::endl;

	file.close();
}
