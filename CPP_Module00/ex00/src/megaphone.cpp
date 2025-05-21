/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:15:24 by tmalheir          #+#    #+#             */
/*   Updated: 2024/11/27 11:56:02 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

/*
	To use the toupper function safely with plain chars (or signed chars),
	the argument should first be converted to unsigned char.
*/
static char	my_toupper(char ch){
	return (static_cast<char>(std::toupper(static_cast<unsigned char>(ch))));
}

int	main(int ac, char **av){

	int			idx_ac;
	int			idx_av;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (idx_ac = 1; idx_ac < ac; idx_ac++){
			for (idx_av = 0; av[idx_ac][idx_av]; idx_av++)
				std::cout << my_toupper(av[idx_ac][idx_av]);
		}
		std::cout << std::endl;
	}
	return (0);
}
