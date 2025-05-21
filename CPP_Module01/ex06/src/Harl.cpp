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
    int idx = -1;
    while (++idx < 4) {
        if (level.compare(levels[idx]) == 0)
            break ;
    }
    switch (idx) {
        case (0):
        case (1):
        case (4):
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
        case (2):
        case (3): {
            std::cout << "[ " << levels[idx] << " ]" << std::endl;
            (this->*complaintFunction[idx])();
            break ;
        }
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
