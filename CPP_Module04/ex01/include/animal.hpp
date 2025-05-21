/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:05:44 by tmalheir          #+#    #+#             */
/*   Updated: 2025/03/17 11:13:38 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		/*Constructors*/
		Animal(void);
		Animal(const std::string type);
		Animal(const Animal& other);
		/*Destructor*/
		virtual ~Animal(void);
		/*Operator overload*/
		Animal &operator=(Animal const &other);
		/*Getter*/
		const std::string	getType(void) const;
		/*Method*/
		virtual void	makeSound(void) const;
};

#endif
