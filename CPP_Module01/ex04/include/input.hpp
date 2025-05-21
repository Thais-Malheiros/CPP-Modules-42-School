/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:52:36 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/16 13:52:52 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_HPP
# define INPUT_HPP

# include <fstream>
#include <iostream>
# include <string>

class   input {

public:
    input(std::string file_name, std::string to_find, std::string to_replace);
    ~input(void);
    bool    checkEmptyArgs(void);
    void    replaceInNewFile(void);

private:
    std::string _file_name;
    std::string _to_find;
    std::string _to_replace;
};

#endif
