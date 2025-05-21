/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:49:04 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/28 12:18:02 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Serializer.hpp"

int	main(void) {
	Data		d;
	Data		*ptr;
	Data		*newPtr;
	uintptr_t	raw;

	d.uintNbr = 42;
	d.intNbr = -42;
	d.doubleNbr = 42.05;
	d.str = "Just a string";
	ptr = &d;
	raw = Serializer::serialize(ptr);
	newPtr = Serializer::deserialize(raw);

	if (ptr == newPtr) {
		std::cout << "Matching pointers\n";
		std::cout << "Value: " << newPtr->uintNbr << std::endl;
		std::cout << "Value: " << newPtr->intNbr << std::endl;
		std::cout << "Value: " << newPtr->doubleNbr << std::endl;
		std::cout << "Value: " << newPtr->str << std::endl;
	}
	else
		std::cout << "Oops, someting went wrong" << std::endl;
	return (0);
}
