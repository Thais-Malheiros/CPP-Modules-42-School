/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:53:07 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/16 14:00:23 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/input.hpp"

input::input(std::string file_name, std::string to_find, std::string to_replace) :
            _file_name(file_name), _to_find(to_find), _to_replace(to_replace) {

}

input::~input(void) {

}

bool    input::checkEmptyArgs(void) {

    if (_file_name.empty() || _to_find.empty() || _to_replace.empty()) {
        std::cout << "Can't have empty arguments." << std::endl;
        return (false);
    }
    return (true);
}

void    input::replaceInNewFile(void) {

    if (!checkEmptyArgs())
        return ;
    std::ifstream    ifs(_file_name.c_str());
    std::string line, text;
    size_t  pos = 0;
    if (ifs.is_open()) {
        while (getline(ifs, line))
            text += line + '\n';
        ifs.close();
        while ((pos = text.find(_to_find, pos)) != std::string::npos) {
            text.erase(pos, _to_find.length());
            text.insert(pos, _to_replace);
            pos += _to_replace.length();
        }
        std::string outfile = _file_name + ".replace";
        std::ofstream   ofs(outfile.c_str());
        if (ofs.is_open()) {
            ofs << text;
            ofs.close();
        }
        else
            std::cout << "Error opening file." << std::endl;
    }
    else
        std::cout << "Error opening file." << std::endl;
}
