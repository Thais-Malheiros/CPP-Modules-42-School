/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplateFunctions.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:41:41 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/23 11:00:43 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATEFUNCTIONS_HPP
# define TEMPLATEFUNCTIONS_HPP

# include <iostream>
# include <string>

template <typename T>
void	swap(T &arg1, T &arg2) {
	T temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template <typename T>
T	min(const T &arg1, const T &arg2) {
	if (arg1 < arg2)
		return (arg1);
	return (arg2);
}

template <typename T>
T	max(const T &arg1, const T &arg2) {
	if (arg1 > arg2)
		return (arg1);
	return (arg2);
}

#endif