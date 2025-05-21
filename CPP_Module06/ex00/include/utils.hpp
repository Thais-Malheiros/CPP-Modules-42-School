/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:54:48 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/28 11:41:24 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include "ScalarConverter.hpp"

std::string	CheckInput(const std::string &input);
void		CheckNull(const std::string &input);
bool		IsChar(const std::string &input);
std::string	CkeckForF(const std::string &input);
void		SafeConvert(const std::string &updatedInput);
int			CountPrecision(const std::string &input);

#endif