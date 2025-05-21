/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:41:25 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/12 11:44:26 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {

    std::string     brain = "HI THIS IS BRAIN";
    std::string*    stringPTR = &brain;
    std::string&    stringREF = brain;

    std::cout << "Brain is at: " << &brain << std::endl;
    std::cout << "stringPTR is at: " << stringPTR << std::endl;
    std::cout << "stringREF is at: " << &stringREF << std::endl;

    std::cout << "Brain is saying:  " << brain << std::endl;
    std::cout << "stringPTR is saying: " << *stringPTR << std::endl;
    std::cout << "stringREF is saying: " << stringREF << std::endl;

    return (0);
}
