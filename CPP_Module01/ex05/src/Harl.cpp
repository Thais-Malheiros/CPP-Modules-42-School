/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:06:23 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/16 14:06:24 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {

    complaintFunction[DEBUG] = &Harl::debug;
    complaintFunction[INFO] = &Harl::info;
    complaintFunction[WARNING] = &Harl::warning;
    complaintFunction[ERROR] = &Harl::error;
}

Harl::~Harl(void) {

}

void    Harl::complain(std::string level) {

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int idx = 0; idx < 4; idx ++) {
        if (level.compare(levels[idx]) == 0)
            (this->*complaintFunction[idx])();
    }
}

void    Harl::debug(void) {

    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
    std::cout << "pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void) {

    std::cout << "I cannot believe adding extra bacon costs more money.";
    std::cout << "You didn’t put enough bacon in my burger!";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void) {

    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << "I’ve been coming for years.";
    std::cout << "You started working here since last month." << std::endl;
}

void    Harl::error(void) {

    std::cout << "This is unacceptable! ";
    std::cout <<  "I want to speak to the manager now." << std:: endl;

}
