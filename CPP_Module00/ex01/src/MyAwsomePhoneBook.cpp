/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwsomePhoneBook.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:57:37 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/11 12:52:06 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <iostream>
#include <string>

static void welcome_msg() {

	std::cout << CYAN << "=============================================" << RESET << std::endl;
	std::cout << BLUE << "  Welcome to your awesome Phonebook!        " << RESET << std::endl;
	std::cout << CYAN << "=============================================" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "     ____                              " << RESET << std::endl;
	std::cout << GREEN << "    /    \\  Phonebook                   " << RESET << std::endl;
	std::cout << GREEN << "   /      \\__________________________  " << RESET << std::endl;
	std::cout << GREEN << "  |  O   O  |   ___________________  |" << RESET << std::endl;
	std::cout << GREEN << "  |    _    |  |                   | |" << RESET << std::endl;
	std::cout << GREEN << "  |   (_)   |  |   Your Contacts   | |" << RESET << std::endl;
	std::cout << GREEN << "  |_________|  |___________________| |" << RESET << std::endl;
	std::cout << GREEN << "                =====================" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << YELLOW << "You can store, search, and manage contacts." << RESET << std::endl;
	std::cout << CYAN << "Let's get started!" << RESET << std::endl;
	std::cout << CYAN << "=============================================" << RESET << std::endl;
}

std::string	to_upper(const std::string &str){
	std::string	upper_str;

	for(std::string::const_iterator it = str.begin(); it != str.end(); ++it){
		upper_str += std::toupper(*it);
	}
	return (upper_str);
}

int	main(void){

	welcome_msg();

	PhoneBook	phonebook;
	std::string	option;

	while (option.compare("EXIT")){
		std::cout << "Choose one option (ADD, SEARCH, EXIT) " << std::endl;
		std::cin.clear();
		getline(std::cin, option);
		option = to_upper(option);
		phonebook.choose_option(option);
	}
	return (0);
}
