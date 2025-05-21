/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:04:29 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/28 15:04:00 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void	iter(T *array, int length, void (*function)(T&)) {
	for (int idx = 0; idx < length; idx++) {
		function(array[idx]);
	}
}

#endif
