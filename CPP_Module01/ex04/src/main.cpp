/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:53:32 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/16 13:53:50 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/input.hpp"

int main(int argc, char **argv) {

    if (argc != 4) {
        std::cout << "Wrong number of inputs.\n";
        std::cout << "<file_name> <str to find> <str to replace>" << std::endl;
        return (1);
    }
    input   user_input(argv[1], argv[2], argv[3]);
    user_input.replaceInNewFile();
    return (0);
}
