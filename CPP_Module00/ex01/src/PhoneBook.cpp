/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:39:07 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/11 12:48:18 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <sstream>

/* Constructor */

PhoneBook::PhoneBook(void) {

	std::cout << "Your awsome phonebook was created" << std::endl;
}

/* Destructor */

PhoneBook::~PhoneBook(void) {

	std::cout << "Ending phonebook consultation" << std::endl;
}

/* Methods */

void	PhoneBook::choose_option(std::string& option){

	if (option == "ADD")
		add_contact();
	else if (option == "SEARCH")
		search_contact();
	else if (option == "EXIT")
		exit_program();
	else
		std::cout << "Invalid option. Please choose again." << std::endl;
}

bool	PhoneBook::is_valid(std::string input) {

	for (std::string::iterator it = input.begin(); it != input.end(); ++it) {
		char c = *it;
		if (!std::isdigit(c))
			return (false);
	}
	return (true);
}

void	PhoneBook::search_contact(void) {

	PhoneBook::display_all();

	std::string	input;
	while (true) {
		std::cout << "Type a valid contact number (from 1 to 8): \n";
		std::getline(std::cin, input);
		if (is_valid(input)) {
			int idx;
			std::stringstream(input) >> idx;
			if (idx > 0 && idx < 9) {
				if (PhoneBook::contacts[idx - 1].get_first_name().empty())
					std::cout << "There is no contact saved here" << std::endl;
				else
					display_contact(idx - 1);
				break;
			}
		}
		else {
			std::cout << "Not a valid input, try again" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}

void	PhoneBook::display_all(void) {

	std::cout << std::setw(10) << std::right << "INDEX" << " | ";
	std::cout << std::setw(10) << std::right << "FIRST NAME" << " | ";
	std::cout << std::setw(10) << std::right << "LAST NAME" << " | ";
	std::cout << std::setw(10) << std::right << "NICKNAME\n" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	for (int idx = 0; idx < 8; idx++) {

		if (PhoneBook::contacts[idx].get_first_name().empty())
			break ;
		std::cout << std::setw(10) << std::right << (idx + 1) << " | ";
		std::cout << std::setw(10) << std::right << format(contacts[idx].get_first_name()) << " | ";
		std::cout << std::setw(10) << std::right << format(contacts[idx].get_last_name()) << " | ";
		std::cout << std::setw(10) << std::right << format(contacts[idx].get_nickname()) << std::endl;
	}
}

void	PhoneBook::display_contact(int idx) {

	std::cout << contacts[idx].get_first_name() << "\n";
	std::cout << contacts[idx].get_last_name() << "\n";
	std::cout << contacts[idx].get_nickname() << "\n";
	std::cout << contacts[idx].get_phone_number() << "\n";
	std::cout << contacts[idx].get_darkest_secret() << std::endl;
}

std::string	PhoneBook::format(const std::string& field) {

	if (field.size() > 9)
		return (field.substr(0, 9) + ".");
	return (field);
}

void	PhoneBook::add_contact(void) {

	static int	idx;
	std::string	first, last, nick, phone, secret;

	while (first.empty()) {
		std::cout << "First name: ";
		std::getline(std::cin, first);
		contacts[idx].set_first_name(first);
	}
	while (last.empty()) {
		std::cout << "Last name: ";
		std::getline(std::cin, last);
		contacts[idx].set_last_name(last);
	}
	while (nick.empty()) {
		std::cout << "Nickname: ";
		std::getline(std::cin, nick);
		contacts[idx].set_nickname(nick);
	}
	std::cout << "Phone number: ";
	while (phone.empty() || !is_valid(phone)) {
			std::getline(std::cin, phone);
			std::cout << "Type a valid phone number" << std::endl;
			std::cin.clear();
	}
	contacts[idx].set_phone_number(phone);
	while (secret.empty()) {
	std::cout << "Secret: ";
	std::getline(std::cin, secret);
	contacts[idx].set_darkest_secret(secret);
	}
	idx++;
	if (idx == 8)
		idx = 0;
}

void	PhoneBook::exit_program(void) {

	std::cout << "Closing your awsome phonebook!" << std::endl;
}

/* ************************************************************************* */