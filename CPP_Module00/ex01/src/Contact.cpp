/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:13:49 by tmalheir          #+#    #+#             */
/*   Updated: 2024/11/19 11:15:33 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include <iostream>

/* Constructor */

Contact::Contact(void) {

	static int idx = 1;
	std::cout << "Contact " << idx << " created" << std::endl;
	idx++;
}

/* Destructor */

Contact::~Contact(void) {

	static int idx = 1;
	std::cout << "Contact " << idx << " deleted" << std::endl;
	idx++;
}

/* Setters */

void	Contact::set_first_name(const std::string& first) {

		_first_name = first;
}

void	Contact::set_last_name(const std::string& last) {

		_last_name = last;
}

void	Contact::set_nickname(const std::string& nick) {

		_nickname = nick;
}

void	Contact::set_phone_number(const std::string& phone) {

		_phone_number = phone;
}

void	Contact::set_darkest_secret(const std::string& secret) {

		_darkest_secret = secret;
}

/* Getters */

std::string	Contact::get_first_name(void)const {

	return (_first_name);
}

std::string	Contact::get_last_name(void)const {

	return (_last_name);
}

std::string	Contact::get_nickname(void)const {

	return (_nickname);
}

std::string	Contact::get_phone_number(void)const {

	return (_phone_number);
}

std::string	Contact::get_darkest_secret(void)const {
	
	return (_darkest_secret);
}

/* ************************************************************************* */