/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:27:49 by tmalheir          #+#    #+#             */
/*   Updated: 2025/05/06 12:13:13 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>
# include <iostream>

template<typename T>
void	easyfind(const T& container, int nbr)
{
	typename T::const_iterator	toFind;

	toFind = std::find(container.begin(), container.end(), nbr);
	if (toFind == container.end())
		throw std::runtime_error("value not found in container");
	std::cout << "The number you are looking for is: " << *toFind <<  std::endl;
}

#endif
