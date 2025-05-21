/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:05:49 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/17 11:48:03 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Functions.hpp"

int	main(void) {
	std::srand(time(NULL));
	for (int idx = 0; idx < 5; ++idx) {
		std::cout << "----Testing obj " << idx << "----" << std::endl;
		Base* obj = generate();
		identify(obj);
		identify(*obj);
		delete obj;
	}
	return (0);
}
