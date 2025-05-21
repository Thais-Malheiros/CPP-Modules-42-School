/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:05:50 by tmalheir          #+#    #+#             */
/*   Updated: 2024/12/16 14:05:55 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class   Harl {

private:

    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    void    (Harl::*complaintFunction[4])();

public:

    Harl(void);
    ~Harl(void);

    enum    level {
        DEBUG,
        INFO,
        WARNING,
        ERROR,
    };

    void    complain(std::string level);
};

#endif
