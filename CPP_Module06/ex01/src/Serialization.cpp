/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:13:37 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/16 15:37:01 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer(void) {
}

Serializer::Serializer(const Serializer &other) {
	*this = other;
}

Serializer& Serializer::operator=(const Serializer &other) {
	if (this == &other)
		return (*this);
	return (*this);
}

Serializer::~Serializer(void) {
}

uintptr_t	Serializer::serialize(Data* ptr) {
	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data*	Serializer::deserialize(uintptr_t raw) {
	Data	*ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}
