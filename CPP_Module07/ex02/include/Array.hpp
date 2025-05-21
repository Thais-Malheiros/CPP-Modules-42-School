/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:05:27 by tmalheir          #+#    #+#             */
/*   Updated: 2025/04/30 10:19:35 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class	Array {
	private:
		T	*_elements;
		unsigned int	_size;
	public:
		Array(void) : _elements(NULL), _size(0) {};
		Array(unsigned int n) : _size(n) {
			if (n > 0)
				_elements = new T[n]();
			else
				_elements = NULL;
		}
		~Array(void) {
			delete[] _elements;
		}
		Array(const Array &other) : _elements(NULL), _size(0) {
			if (other._size > 0) {
				this->_size = other._size;
				this->_elements = new T[this->_size]();
				for (unsigned int idx = 0; idx < _size; idx++)
					this->_elements[idx] = other._elements[idx];
			}
			else
				this->_elements = NULL;
		}
		Array& operator=(const Array &other) {
			if (this != &other) {
				delete[] this->_elements;
				this->_size = other._size;
				if (this->_size > 0) {
					this->_elements = new T[this->_size]();
					for (unsigned int idx = 0; idx < _size; idx++)
						this->_elements[idx] = other._elements[idx];
				}
				else
					this->_elements = NULL;
			}
			return (*this);
		}
		T& operator[](unsigned int idx) {
			if (idx >= this->_size)
				throw std::out_of_range("Out of range error");
			return (this->_elements[idx]);
		}
		const T& operator[](unsigned int idx) const {
			if (idx >= this->_size)
				throw std::out_of_range("Out of range error");
			return (this->_elements[idx]);
		}
		unsigned int	size() const {
			return (this->_size);
		}
};

#endif
